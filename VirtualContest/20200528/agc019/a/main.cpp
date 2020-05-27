#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll q, h, s, d, n;
    cin >> q >> h >> s >> d >> n;
    h = min(h, 2 * q);
    s = min(s, 2 * h);

    ll ans;
    if (2 * s <= d)
        ans = n * s;
    else
        ans = n / 2 * d + (n % 2) * s;

    cout << ans << endl;
    return 0;
}
