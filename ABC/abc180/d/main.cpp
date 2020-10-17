#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
int const MOD = 1e9 + 7;

int main() {
    ll x, y, a, b;
    cin >> x >> y >> a >> b;

    ll ans = 0;
    while ((double)a * x <= 2e18 && a * x <= x + b && a * x < y) {
        x *= a;
        ans++;
    }

    cout << ans + (y - 1 - x) / b << endl;
    return 0;
}
