#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n, C;
    cin >> n >> C;
    vector<pair<ll, ll>> event;
    rep(i, n) {
        ll a, b, c;
        cin >> a >> b >> c;
        event.emplace_back(a - 1, c);
        event.emplace_back(b, -c);
    }
    sort(event.begin(), event.end());

    ll ans = 0, fee = 0, t = 0;
    for (auto e : event) {
        ll x, y;
        tie(x, y) = e;
        if (x != t) {
            ans += min(C, fee) * (x - t);
            t = x;
        }
        fee += y;
    }

    cout << ans << endl;
    return 0;
}
