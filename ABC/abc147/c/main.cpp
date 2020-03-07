#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int N;
    cin >> N;

    int g[15][15];
    rep(i, N) rep(j, N) g[i][j] = -1;
    rep(i, N) {
        int A;
        cin >> A;
        rep(j, A) {
            int x, y;
            cin >> x >> y;
            x--;
            g[i][x] = y;
        }
    }

    int ans = 0;
    rep(i, 1 << N) {
        vector<int> d(N);
        rep(j, N) if (i >> j & 1) {
            d[j] = 1;
        }
        bool ok = true;
        rep(j, N) if (d[j]) {
            rep(k, N) {
                if (g[j][k] == -1) continue;
                if (g[j][k] != d[k]) ok = false;
            }
        }
        if (ok) ans = max(ans, __builtin_popcount(i));
    }

    cout << ans << endl;
    return 0;
}
