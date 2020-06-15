#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int p[n];
    rep(i, n) cin >> p[i];
    sort(p, p + n);

    int error = 1e5;
    int ans = 0;

    rep(i, 105) {
        bool ok = true;
        rep(j, n) if (i == p[j]) ok = false;
        if (!ok) continue;

        int e = abs(i - x);

        if (error > e) {
            ans = i;
            error = e;
        }
    }

    cout << ans << endl;
    return 0;
}
