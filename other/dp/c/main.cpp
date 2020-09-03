#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

ll dp[1000005][3];

int main() {
    int n;
    cin >> n;
    int a[n][3];
    rep(i, n) rep(j, 3) cin >> a[i][j];

    rep(i, n) rep(j, 3) rep(k, 3) {
        if (j == k) continue;
        dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + a[i][k]);
    }

    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
    return 0;
}
