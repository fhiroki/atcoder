#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
using P = pair<ll, ll>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<P> a(n);
    rep(i, n) cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());

    ll ans = 0;
    int cnt = 0;
    for (auto k: a) {
        if (k.second + cnt <= m) {
            ans += k.first * k.second;
            cnt += k.second;
        } else {
            ans += k.first * (m - cnt);
            cnt += m - cnt;
        }
        if (cnt == m) break;
    }

    cout << ans << endl;
    return 0;
}
