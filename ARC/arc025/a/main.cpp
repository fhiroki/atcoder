#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int d[7], j[7];
    rep(i, 7) cin >> d[i];
    rep(i, 7) cin >> j[i];

    int ans = 0;
    rep(i, 7) ans += max(d[i], j[i]);

    cout << ans << endl;
    return 0;
}
