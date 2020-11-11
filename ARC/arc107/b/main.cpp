#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    ll ans = 0;
    for (ll x = 2; x <= 2 * n; x++) {
        ll y = x - k;
        if (y >= 2 && y <= 2 * n) {
            ans += min(x - 1, 2 * n + 1 - x) * min(y - 1, 2 * n + 1 - y);
        }
    }

    cout << ans << endl;
    return 0;
}
