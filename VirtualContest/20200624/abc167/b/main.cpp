#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    ll ans = min(a, k);
    k -= a + b;
    if (k > 0) ans -= k;

    cout << ans << endl;
    return 0;
}
