#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int t[n][k];
    rep(i, n) rep(j, k) cin >> t[i][j];

    rep(k1, k) rep(k2, k) rep(k3, k) rep(k4, k) rep(k5, k) {
        int ans = t[0][k1];
        if (n >= 2) ans ^= t[1][k2];
        if (n >= 3) ans ^= t[2][k3];
        if (n >= 4) ans ^= t[3][k4];
        if (n >= 5) ans ^= t[4][k5];
        if (ans == 0) {
            cout << "Found" << endl;
            return 0;
        }
    }

    cout << "Nothing" << endl;
    return 0;
}
