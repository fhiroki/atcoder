#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int const MOD = 1e9 + 7;
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);

    if (n % 2 == 0) {
        bool ok = true;
        int cnt = 0;
        for (int i = 0; i < n; i += 2) {
            int b = 2 * cnt + 1;
            if (!(a[i] == b && a[i + 1] == b)) ok = false;
            cnt++;
        }
        if (!ok) {
            cout << 0 << endl;
            return 0;
        }
    } else {
        if (a[1] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    ll ans = 1;
    rep(i, n / 2) ans = (ans * 2) % MOD;
    cout << ans << endl;
    return 0;
}
