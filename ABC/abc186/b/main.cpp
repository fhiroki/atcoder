#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int a[h][w];

    int minv = 105;
    rep(i, h) rep(j, w) {
        cin >> a[i][j];
        minv = min(minv, a[i][j]);
    }

    int ans = 0;
    rep(i, h) rep(j, w) ans += a[i][j] - minv;

    cout << ans << endl;
    return 0;
}
