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
        int a = abs(x[i] - x[i - 1]) + abs(y[i] - y[i - 1]);
        int b = t[i] - t[i - 1];
        if (i == 0) a = x[0] + y[0], b = t[0];
        if (a > b || a % 2 != b % 2) ok = false;
    }

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
