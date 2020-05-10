#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    ll ans = 0;
    if (a <= k)
        ans += a, k -= a;
    else
        ans = k, k = 0;
    k -= b;
    if (k > 0) ans -= k;

    cout << ans << endl;
    return 0;
}
