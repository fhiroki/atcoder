#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll x;
    cin >> x;

    ll ans = x / 11 * 2;
    ll a = x % 11;
    if (a > 6)
        ans += 2;
    else if (a != 0)
        ans++;

    cout << ans << endl;
    return 0;
}
