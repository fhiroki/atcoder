#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
using T = tuple<int, int, int>;
const int INF = 1e9;

struct Loc {
    int dyx;
    int y;
    int x;

    Loc(T t) {
        dyx = get<0>(t);
        y = get<1>(t);
        x = get<2>(t);
    }
};

int main() {
    int h, w, cy, cx, dy, dx;
    cin >> h >> w >> cy >> cx >> dy >> dx;
    char s[h][w];
    rep(i, h) rep(j, w) cin >> s[i][j];
    cy--, cx--, dy--, dx--;

    vector<vector<int>> d(h, vector<int>(w, INF));
    d[cy][cx] = 0;

    priority_queue<T> q;
    q.push({0, cy, cx});

    while (!q.empty()) {
        Loc loc = Loc(q.top());
        q.pop();
        if (loc.dyx > d[loc.y][loc.x]) continue;

        for (int i = -2; i <= 2; i++) {
            int y = loc.y + i;
            if (y < 0 || y >= h) continue;

            for (int j = -2; j <= 2; j++) {
                int x = loc.x + j;
                if (x < 0 || x >= w) continue;
                if (s[y][x] == '#') continue;

                int dt = d[loc.y][loc.x] + (abs(i) + abs(j) > 1 ? 1 : 0);
                if (dt < d[y][x]) {
                    d[y][x] = dt;
                    q.push({-dt, y, x});
                }
            }
        }
    }

    cout << (d[dy][dx] != INF ? d[dy][dx] : -1) << endl;
    return 0;
}
