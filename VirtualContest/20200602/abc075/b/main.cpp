#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    char g[h][w];
    rep(y, h) rep(x, w) cin >> g[y][x];

    rep(y, h) {
        rep(x, w) {
            if (g[y][x] == '#') {
                cout << '#';
                continue;
            }

            int cnt = 0;
            for (int i = -1; i <= 1; i++) {
                int dy = y + i;
                if (dy < 0 || dy >= h) continue;
                for (int j = -1; j <= 1; j++) {
                    int dx = x + j;
                    if (dx < 0 || dx >= w) continue;
                    if (g[dy][dx] == '#') cnt++;
                }
            }
            cout << cnt;
        }
        cout << endl;
    }

    return 0;
}
