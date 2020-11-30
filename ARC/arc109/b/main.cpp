#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    ll s = -2 * (n + 1);
    ll t = (sqrtl(1 - 4 * s) - 1) / 2;
    ll ans = n - t + 1;

    cout << ans << endl;
    return 0;
}
