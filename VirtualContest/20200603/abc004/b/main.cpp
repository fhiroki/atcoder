#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    char g[4][4];
    rep(y, 4) rep(x, 4) cin >> g[y][x];

    for (int y = 3; y >= 0; y--) {
        for (int x = 3; x >= 0; x--) {
            cout << g[y][x];
            if (x != 0) cout << ' ';
        }
        cout << endl;
    }

    return 0;
}
