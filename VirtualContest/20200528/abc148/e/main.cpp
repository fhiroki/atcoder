#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    ll ans = 0;
    if (n % 2 == 0) {
        for (ll i = 10; i <= n; i *= 5) ans += n / i;
    }

    cout << ans << endl;
    return 0;
}
