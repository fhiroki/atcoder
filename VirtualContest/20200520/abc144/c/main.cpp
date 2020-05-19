#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    ll ans = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) ans = i;
    }

    cout << ans + n / ans - 2 << endl;
    return 0;
}
