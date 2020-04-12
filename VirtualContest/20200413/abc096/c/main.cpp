#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    char s[h][w];
    rep(y, h) rep(x, w) cin >> s[y][x];

    int ans = 0;
    rep(y, h) rep(x, w) {
        if (s[y][x] == '.') continue;

        bool ok = false;
        for (int dy = -1; dy <= 1; dy += 2) {
            int my = y + dy;
            if (my >= 0 && s[my][x] == '#') ok = true;
        }
        for (int dx = -1; dx <= 1; dx += 2) {
            int mx = x + dx;
            if (mx >= 0 && s[y][mx] == '#') ok = true;
        }

        if (!ok) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
