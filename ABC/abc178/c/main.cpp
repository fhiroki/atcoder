#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
int const MOD = 1e9 + 7;

ll powmod(ll x, ll y) {
    ll res = 1;
    for (ll i = 0; i < y; i++) {
        res = res * x % MOD;
    }
    return res;
}

int main() {
    ll n;
    cin >> n;

    ll ans = powmod(10, n) - 2 * powmod(9, n) + powmod(8, n);
    ans %= MOD;
    ans = (ans + MOD) % MOD;

    cout << ans << endl;
    return 0;
}
