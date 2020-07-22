#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};

int main() {
    int h, w, sy, sx, gy, gx;
    cin >> h >> w >> sy >> sx >> gy >> gx;
    sy--, sx--, gy--, gx--;
    char c[h][w];
    rep(i, h) rep(j, w) cin >> c[i][j];

    vector<vector<int>> ans(h, vector<int>(w, -1));
    ans[sy][sx] = 0;

    queue<pair<int, int>> q;
    q.emplace(sy, sx);

    while (!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();

        rep(i, 4) {
            int y = now.first + dy[i];
            int x = now.second + dx[i];
            if (c[y][x] == '#' || ans[y][x] != -1) continue;
            ans[y][x] = ans[now.first][now.second] + 1;
            q.emplace(y, x);
        }
    }

    cout << ans[gy][gx] << endl;
    return 0;
}
