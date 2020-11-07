#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

const int MOD = 998244353;
ll ans = 1;

ll mod_prod(ll x) { return (ans * ((x * (x + 1) / 2) % MOD)) % MOD; }

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    ans = mod_prod(a);
    ans = mod_prod(b);
    ans = mod_prod(c);

    cout << ans << endl;
    return 0;
}
