#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;

    int g[n][n];
    rep(i, n) rep(j, n) g[i][j] = -1;
    rep(i, n) {
        int a;
        cin >> a;
        rep(j, a) {
            int x, y;
            cin >> x >> y;
            g[i][x - 1] = y;
        }
    }

    int ans = 0;
    rep(bit, 1 << n) {
        int d[n] = {0};
        rep(i, n) if (bit & (1 << i)) d[i] = 1;

        bool ok = true;
        rep(i, n) if (d[i]) {
            rep(j, n) {
                if (g[i][j] == -1) continue;
                if (g[i][j] != d[j]) ok = false;
            }
        }
        if (ok) ans = max(ans, __builtin_popcount(bit));
    }

    cout << ans << endl;
    return 0;
}
