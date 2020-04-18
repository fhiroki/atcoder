#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    n *= 3;
    int a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n, greater<int>());

    ll ans = 0;
    for (int i = 1; i < n / 3 * 2; i += 2) ans += a[i];

    cout << ans << endl;
    return 0;
}
