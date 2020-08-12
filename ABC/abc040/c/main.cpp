#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];

    ll dp[n];
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        ll c1 = dp[i - 1] + abs(a[i] - a[i - 1]);
        ll c2 = dp[i - 2] + abs(a[i] - a[i - 2]);
        dp[i] = min(c1, c2);
    }

    cout << dp[n - 1] << endl;
    return 0;
}
