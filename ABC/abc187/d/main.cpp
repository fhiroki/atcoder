#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> v(n);

    ll x = 0;
    rep(i, n) {
        ll a, b;
        cin >> a >> b;
        x -= a;
        v[i] = 2 * a + b;
    }
    sort(v.begin(), v.end());

    int ans = 0;
    while (x <= 0) {
        x += v.back();
        v.pop_back();
        ans++;
    }

    cout << ans << endl;
    return 0;
}
