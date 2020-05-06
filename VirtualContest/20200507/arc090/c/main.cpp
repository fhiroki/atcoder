#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[2][n];
    rep(i, n) cin >> a[0][i];
    rep(i, n) cin >> a[1][i];

    int ans = 0;
    rep(i, n) {
        int now = 0;
        rep(j, n) {
            if (i == j)
                now += a[0][j] + a[1][j];
            else if (i > j)
                now += a[0][j];
            else
                now += a[1][j];
        }
        ans = max(ans, now);
    }

    cout << ans << endl;
    return 0;
}
