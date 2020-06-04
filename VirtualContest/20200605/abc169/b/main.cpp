#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n];
    rep(i, n) {
        ll A;
        cin >> A;
        if (A == 0) {
            cout << 0 << endl;
            return 0;
        }
        a[i] = A;
    }

    ll ans = 1;
    rep(i, n) {
        if (a[i] <= 1000000000000000000 / ans)
            ans *= a[i];
        else
            ans = -1;
    }

    cout << ans << endl;
    return 0;
}
