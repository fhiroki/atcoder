#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

char s[25][25];
int v[25][25];
int h, w;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

void dfs(int y, int x, int k) {
    if (y < 0 || y >= h || x < 0 || x >= w) return;
    if (s[y][x] == '#') return;
    if (v[y][x] <= k) return;
    v[y][x] = k;
    rep(i, 4) dfs(y + dy[i], x + dx[i], k + 1);
}

int main() {
    cin >> h >> w;
    rep(i, h) rep(j, w) cin >> s[i][j];

    int ans = 0;
    rep(i, h) rep(j, w) {
        if (s[i][j] == '.') {
            memset(v, 0x40, sizeof(v));
            dfs(i, j, 0);
            rep(y, h) rep(x, w) {
                if (v[y][x] != v[24][24]) ans = max(ans, v[y][x]);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
