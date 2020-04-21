#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int c[3][3];
    rep(i, 3) rep(j, 3) cin >> c[i][j];

    rep(a1, 101) rep(a2, 101) rep(a3, 101) {
        bool ok = true;

        rep(i, 3) {
            int b1 = c[0][i] - a1;
            int b2 = c[1][i] - a2;
            int b3 = c[2][i] - a3;
            if (!(b1 == b2 && b2 == b3 && b1 == b3)) ok = false;
        }

        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
