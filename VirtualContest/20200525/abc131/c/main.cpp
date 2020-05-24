#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    a--;

    ll l = c / __gcd(c, d) * d;
    ll ans = (b - b/c - b/d + b/l) - (a - a/c - a/d + a/l);

    cout << ans << endl;
    return 0;
}
