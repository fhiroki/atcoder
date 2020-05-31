#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n];
    rep(i, n) {
        ll b;
        cin >> b;
        if (b == 0) {
            cout << 0 << endl;
            return 0;
        }
        a[i] = b;
    }

    ll ans = 1;
    rep(i, n) {
        if (a[i] <= 1000000000000000000 / ans) {
            ans *= a[i];
        } else {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans << endl;
    return 0;
}
