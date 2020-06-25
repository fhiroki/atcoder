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
        int dist = 0, dt = 0;
        if (i == 0)
            dist = x[0] + y[0], dt = t[0];
        else {
            dist = abs(x[i] - x[i - 1]) + abs(y[i] - y[i - 1]);
            dt = t[i] - t[i - 1];
        }

        if (!(dist <= dt && dist % 2 == dt % 2)) ok = false;
    }

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
