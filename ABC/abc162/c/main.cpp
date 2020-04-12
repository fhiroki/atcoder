#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
using namespace std;

int main() {
    int k;
    cin >> k;

    ll ans = 0;
    rep(a, k) rep(b, k) rep(c, k) { ans += __gcd(a, __gcd(b, c)); }

    cout << ans << endl;
    return 0;
}
