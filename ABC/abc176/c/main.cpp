#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n];
    rep(i, n) cin >> a[i];

    ll ans = 0;
    for (int i = 1; i < n; i++) {
        int diff = max(a[i - 1] - a[i], 0ll);
        ans += diff;
        a[i] += diff;
    }

    cout << ans << endl;
    return 0;
}
