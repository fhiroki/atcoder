#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    int c[h][w], a[n];
    rep(i, h) rep(j, w) c[i][j] = 0;
    rep(i, n) cin >> a[i];

    bool right = true;
    int x = 0, y = 0;
    rep(i, n) {
        rep(j, a[i]) {
            c[y][x] = i + 1;
            if (right && x == w - 1 || !right && x == 0) {
                right = !right;
                y++;
            } else
                right ? x++ : x--;
        }
    }

    rep(i, h) {
        rep(j, w) {
            cout << c[i][j];
            if (j != w - 1) cout << ' ';
        }
        cout << endl;
    }

    return 0;
}
