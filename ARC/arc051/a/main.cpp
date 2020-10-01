#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

const int MAX = 205;
int g[MAX][MAX];

void print(bool ok) {
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int x1, x2, x3, y1, y2, y3, r;
    cin >> x1 >> y1 >> r >> x2 >> y2 >> x3 >> y3;

    int ans = 0;
    for (int y = -100; y <= 100; y++) {
        for (int x = -100; x <= 100; x++) {
            if (pow(x - x1, 2) + pow(y - y1, 2) <= r * r) {
                g[x + 100][y + 100] += 1;
            }
            if (x >= x2 && x <= x3 && y >= y2 && y <= y3) {
                g[x + 100][y + 100] += 2;
            }
        }
    }

    bool red = false, blue = false;
    rep(y, MAX) rep(x, MAX) {
        if (g[y][x] == 1)
            red = true;
        else if (g[y][x] == 2)
            blue = true;
    }

    print(red);
    print(blue);
    return 0;
}
