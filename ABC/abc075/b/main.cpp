#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int a[51][51];

int main() {
    int h, w;
    cin >> h >> w;
    string s[h];
    rep(i, h) cin >> s[i];

    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == '.') continue;
            a[i][j] = -1;

            for (int dy = -1; dy <= 1; dy++) {
                for (int dx = -1; dx <= 1; dx++) {
                    if (dx == 0 && dy == 0) continue;
                    int y = i + dy;
                    int x = j + dx;
                    if (y >= 0 && y < h && s[y][x] == '.') a[y][x]++;
                }
            }
        }
    }

    rep(i, h) {
        rep(j, w) {
            if (a[i][j] == -1)
                cout << '#';
            else
                cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
