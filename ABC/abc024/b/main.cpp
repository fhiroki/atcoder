#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int a[n];
    rep(i, n) cin >> a[i];

    ll ans = t;
    rep(i, n - 1) {
        int dt = a[i + 1] - a[i];
        if (dt < t)
            ans += dt;
        else
            ans += t;
    }

    cout << ans << endl;
    return 0;
}
