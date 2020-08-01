#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, s, t, w;
    cin >> n >> s >> t >> w;

    int ans = (w >= s && w <= t) ? 1 : 0;
    rep(i, n - 1) {
        int a;
        cin >> a;
        w += a;
        if (w >= s && w <= t) ans++;
    }

    cout << ans << endl;
    return 0;
}
