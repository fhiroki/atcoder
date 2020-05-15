#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    map<ll, int, greater<ll>> m;
    rep(i, n) {
        ll a;
        cin >> a;
        m[a]++;
    }

    ll ans = 0;
    int cnt = 0;
    for (auto c : m) {
        if (c.second >= 4) {
            cnt == 0 ? ans = c.first* c.first : ans *= c.first;
            break;
        } else if (c.second >= 2) {
            if (cnt == 0)
                ans = c.first, cnt++;
            else if (cnt == 1) {
                ans *= c.first;
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
