#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int const MAX = 100005;
int v[MAX];
ll a[MAX];

int main() {
    ll n, x, m;
    cin >> n >> x >> m;

    a[0] = x;
    v[x] = 0;

    for (int i = 1; i < n; i++) {
        x = (x * x) % m;

        if (v[x]) {
            int l = v[x] - 1;
            int r = i - 1;
            ll cnt = (n - (l + 1)) / (r - l);
            int mod = (n - (l + 1)) % (r - l);
            ll ans = a[l] + (a[r] - a[l]) * cnt + (a[l + mod] - a[l]);
            cout << ans << endl;
            return 0;
        }

        v[x] = i;
        a[i] += a[i - 1];
        a[i] += x;
    }

    cout << a[n - 1] << endl;
    return 0;
}
