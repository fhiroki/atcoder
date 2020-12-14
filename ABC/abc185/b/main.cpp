#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m, t;
    cin >> n >> m >> t;
    int n_org = n;
    int a[m], b[m];

    int ans = 0;
    rep(i, m) cin >> a[i] >> b[i];

    rep(i, m) {
        n -= a[i];
        if (i != 0) n += b[i - 1];
        if (n <= 0) {
            cout << "No" << endl;
            return 0;
        }
        n = min(n_org, n + b[i] - a[i]);
    }

    if (n - (t - b[m - 1]) > 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
