#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int h[l + 10] = {0};
    rep(i, n) {
        int x;
        cin >> x;
        h[x] = 1;
    }
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    vector<ll> dp(l + 10, 1e18);
    dp[0] = 0;
    rep(i, l) {
        dp[i + 1] = min(dp[i + 1], dp[i] + t1 + t3 * h[i + 1]);
        dp[i + 2] = min(dp[i + 2], dp[i] + t1 + t2 + t3 * h[i + 2]);
        dp[i + 4] = min(dp[i + 4], dp[i] + t1 + 3 * t2 + t3 * h[i + 4]);
        if (i + 4 > l)
            dp[l] = min(dp[l], dp[i] + t1 / 2 + t2 * (l - i - 1) + t2 / 2);
    }

    cout << dp[l] << endl;
    return 0;
}
