#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    char s[h][w];
    rep(i, h) rep(j, w) cin >> s[i][j];

    rep(i, h) rep(j, w) {
        if (s[i][j] == '.') continue;
        bool ok = false;
        for (int dy = -1; dy <= 1; dy += 2) {
            int y = i + dy;
            if (y >= 0 && y < h && s[y][j] == '#') ok = true;
        }
        for (int dx = -1; dx <= 1; dx += 2) {
            int x = j + dx;
            if (x >= 0 && x < w && s[i][x] == '#') ok = true;
        }
        if (!ok) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
