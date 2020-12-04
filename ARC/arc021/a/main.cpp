#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a[4][4];
    rep(i, 4) rep(j, 4) cin >> a[i][j];

    bool ok = false;
    rep(i, 4) rep(j, 4) {
        if (i < 3 && a[i][j] == a[i + 1][j]) ok = true;
        if (j < 3 && a[i][j] == a[i][j + 1]) ok = true;
    }

    if (ok)
        cout << "CONTINUE" << endl;
    else
        cout << "GAMEOVER" << endl;
    return 0;
}
