#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n, s, t, w = 0;
    cin >> n >> s >> t;

    int ans = 0;
    rep(i, n) {
        int a;
        cin >> a;
        w += a;
        if (w >= s && w <= t) ans++;
    }

    cout << ans << endl;
    return 0;
}
