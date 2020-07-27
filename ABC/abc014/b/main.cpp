#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    rep(i, n) cin >> a[i];
    bitset<20> b = x;

    ll ans = 0;
    for (int i = 0; i <= n; i++) {
        if (b[i]) ans += a[i];
    }

    cout << ans << endl;
    return 0;
}
