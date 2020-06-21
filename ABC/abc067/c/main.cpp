#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n];

    cin >> a[0];
    ll sum = a[0];

    for (int i = 1; i < n; i++) {
        ll A;
        cin >> A;
        sum += A;
        a[i] = a[i - 1] + A;
    }

    ll ans = 1e12;
    rep(i, n - 1) {
        ll l = a[i];
        ll r = sum - a[i];
        ans = min(ans, abs(r - l));
    }

    cout << ans << endl;
    return 0;
}
