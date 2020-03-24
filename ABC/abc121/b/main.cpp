#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m, c;
    cin >> n >> m >> c;
    int b[m];
    rep(i, m) cin >> b[i];

    int ans = 0;
    rep(i, n) {
        int a[m];
        rep(j, m) cin >> a[j];
        int s = c;
        rep(j, m) s += a[j]*b[j];
        if (s > 0) ans++;
    }

    cout << ans << endl;
    return 0;
}
