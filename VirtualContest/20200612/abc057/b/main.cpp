#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    ll a[n], b[n], c[m], d[m];
    rep(i, n) cin >> a[i] >> b[i];
    rep(i, m) cin >> c[i] >> d[i];

    rep(i, n) {
        ll minDist = 1e12;
        int idx = 0;
        rep(j, m) {
            ll dist = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            if (dist < minDist) idx = j, minDist = dist;
        }
        cout << idx + 1 << endl;
    }

    return 0;
}
