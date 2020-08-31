#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    rep(i, n) cin >> h[i];

    vector<int> dp(n + 5, 1e9);
    dp[0] = 0;
    rep(i, n) {
        dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
    }

    cout << dp[n - 1] << endl;
    return 0;
}
