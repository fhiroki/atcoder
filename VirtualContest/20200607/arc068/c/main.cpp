#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll x;
    cin >> x;

    ll ans = x / 11 * 2;
    if (x % 11 == 0)
        ;
    else if (x % 11 <= 6)
        ans += 1;
    else
        ans += 2;

    cout << ans << endl;
    return 0;
}
