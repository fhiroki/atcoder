#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n + 1], b[n];
    rep(i, n + 1) cin >> a[i];
    rep(i, n) cin >> b[i];

    ll ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (b[i] >= a[i + 1]) {
            ans += a[i + 1];
            b[i] -= a[i + 1];
        } else {
            ans += b[i];
            b[i] = 0;
        }

        if (b[i] >= a[i]) {
            ans += a[i];
            a[i] = 0;
        } else {
            ans += max(0ll, b[i]);
            a[i] -= max(0ll, b[i]);
        }
    }

    cout << ans << endl;
    return 0;
}
