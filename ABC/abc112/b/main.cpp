#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    pair<int, int> a[n];
    rep(i, n) cin >> a[i].first >> a[i].second;

    int ans = 1001;
    rep(i, n) {
        if (a[i].second <= t) ans = min(ans, a[i].first);
    }

    if (ans == 1001)
        cout << "TLE" << endl;
    else
        cout << ans << endl;
    return 0;
}
