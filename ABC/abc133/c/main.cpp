#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll l, r;
    cin >> l >> r;

    ll ans = 2017 * 2018 + 1;
    if (r-l < 2019) {
        for (ll i = l; i < r; i++) {
            for (ll j = i+1; j <= r; j++) {
                ans = min(ans, i*j % 2019);
            }
        }
    } else ans = 0;

    cout << ans << endl;
    return 0;
}
