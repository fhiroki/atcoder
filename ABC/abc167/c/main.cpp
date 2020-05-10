#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    int c[n], a[n][m];
    rep(i, n) {
        cin >> c[i];
        rep(j, m) cin >> a[i][j];
    }

    ll ans = 1e9;
    rep(bit, 1 << n) {
        int b[m] = {0};
        ll cost = 0;
        rep(i, n) {
            if (bit & (1 << i)) {
                rep(j, m) b[j] += a[i][j];
                cost += c[i];
            }
        }
        bool ok = true;
        rep(i, m) if (b[i] < x) ok = false;
        if (ok) ans = min(ans, cost);
    }

    if (ans == 1e9) ans = -1;
    cout << ans << endl;
    return 0;
}
