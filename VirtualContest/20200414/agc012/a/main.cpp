#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[3 * n];
    rep(i, 3 * n) cin >> a[i];
    sort(a, a + 3 * n, greater<int>());

    ll ans = 0;
    rep(i, n) ans += a[i * 2 + 1];

    cout << ans << endl;
    return 0;
}
