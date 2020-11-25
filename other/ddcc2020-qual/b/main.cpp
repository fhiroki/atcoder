#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n];
    ll sum = 0;

    rep(i, n) {
        cin >> a[i];
        sum += a[i];
    }

    ll ans = sum;
    ll m = 0;
    rep(i, n) {
        m += a[i];
        ans = min(ans, abs(m * 2 - sum));
    }

    cout << ans << endl;
    return 0;
}
