#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n+1];
    rep(i, n+1) cin >> a[i];

    ll ans = 0;
    rep(i, n) {
        ll b;
        cin >> b;
        ll t = min(b, a[i] + a[i+1]);
        ans += t;
        a[i+1] -= t - min(b, a[i]);
    }

    cout << ans << endl;
    return 0;
}
