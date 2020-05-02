#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int c[3][3];
    rep(i, 3) rep(j, 3) cin >> c[i][j];

    rep(a1, 101) rep(a2, 101) rep(a3, 101) {
        bool ok = true;
        rep(j, 3) if (!(c[0][j] - a1 == c[1][j] - a2 &&
                        c[1][j] - a2 == c[2][j] - a3)) ok = false;
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
