#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n, greater<ll>());

    ll ans = a[0];
    int idx = 1, cnt = 0;
    for (int i = 1; i < n - 1; i++) {
        if (cnt == 2) cnt = 0, idx++;
        ans += a[idx];
        cnt++;
    }

    cout << ans << endl;
    return 0;
}
