#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    int ans = 0, t = 0, cnt = 0;
    while (true) {
        if (cnt % 2 == 0) {
            auto it = lower_bound(a.begin(), a.end(), t);
            if (it == a.end()) break;
            t = *it + x;
        } else {
            auto it = lower_bound(b.begin(), b.end(), t);
            if (it == b.end()) break;
            t = *it + y;
            ans++;
        }
        cnt++;
    }

    cout << ans << endl;
    return 0;
}
