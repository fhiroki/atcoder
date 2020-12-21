#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

ll b[200005];

int main() {
    int n;
    cin >> n;
    ll a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);

    ll ans = 0;
    rep(i, n) ans += a[i] * (i * 2 - n + 1);

    cout << ans << endl;
    return 0;
}
