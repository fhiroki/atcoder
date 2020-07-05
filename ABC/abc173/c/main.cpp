#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    char g[h][w];
    rep(i, h) rep(j, w) cin >> g[i][j];

    int ans = 0;
    rep(bitR, 1 << h) {
        rep(bitC, 1 << w) {
            int a = 0;
            rep(i, h) rep(j, w) {
                if (bitR & (1 << i) && bitC & (1 << j) && g[i][j] == '#') a++;
            }
            if (a == k) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
