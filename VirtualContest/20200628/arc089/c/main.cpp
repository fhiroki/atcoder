#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n], x[n], y[n];
    rep(i, n) cin >> t[i] >> x[i] >> y[i];

    bool ok = true;
    rep(i, n) {
        int dt, dx, dy;
        if (i == 0)
            dt = t[0], dx = x[0], dy = y[0];
        else {
            dt = t[i] - t[i - 1];
            dx = abs(x[i] - x[i - 1]);
            dy = abs(y[i] - y[i - 1]);
        }
        if (!(dt >= dx + dy && dt % 2 == (dx + dy) % 2)) ok = false;
    }

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
