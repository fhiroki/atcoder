#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
const int INF = 1e9;

int main() {
    int n, k;
    cin >> n >> k;
    int h[n];
    rep(i, n) cin >> h[i];

    vector<int> dp(n, INF);
    dp[0] = 0;
    rep(i, n) {
        for (int j = 1; j <= k; j++) {
            dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
        }
    }

    cout << dp[n - 1] << endl;
    return 0;
}
