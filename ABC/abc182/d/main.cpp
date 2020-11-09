#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

ll d[200005];

int main() {
    int n;
    cin >> n;

    int a[n];
    rep(i, n) cin >> a[i];
    rep(i, n) d[i + 1] = d[i] + a[i];

    ll ans = 0, sum = 0, mx = 0;
    rep(i, n) {
        mx = max(mx, d[i + 1]);
        ans = max(ans, sum + mx);
        sum += d[i + 1];
    }

    cout << ans << endl;
    return 0;
}
