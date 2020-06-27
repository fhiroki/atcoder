#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    ll a[n], b[m];
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    int ans = 0;
    int i = 0;
    ll time = 0;
    while (true) {
        if (i % 2 == 0) {
            if (i != 0) ans++;

            auto it = lower_bound(a, a + n, time);
            if (it - a == n) break;
            time = *it + x;
        } else {
            auto it = lower_bound(b, b + m, time);
            if (it - b == m) break;
            time = *it + y;
        }
        i++;
    }

    cout << ans << endl;
    return 0;
}
