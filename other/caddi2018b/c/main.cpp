#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n, p;
    cin >> n >> p;

    vector<pair<ll, int>> v;
    for (ll i = 2; i * i <= p; i++) {
        if (p % i != 0) continue;
        int ex = 0;
        while (p % i == 0) {
            ex++;
            p /= i;
        }
        v.push_back({i, ex});
    }
    if (p != 1) v.push_back({p, 1});

    ll ans = 1;
    for (auto e : v) ans *= pow(e.first, e.second / n);

    cout << ans << endl;
    return 0;
}
