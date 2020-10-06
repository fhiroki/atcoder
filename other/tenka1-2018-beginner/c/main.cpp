#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

bool ok[100005];

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);

    ll ans = a[n - 1] - a[0];
    for (int i = 1; i < n / 2; i++) {
        ans += a[n - i] - a[i];
        ans += a[n - i - 1] - a[i - 1];
    }
    int t = n / 2;
    if (n % 2 != 0) ans += max(a[t + 1] - a[t], a[t] - a[t - 1]);

    cout << ans << endl;
    return 0;
}
