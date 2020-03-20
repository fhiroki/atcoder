#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a[5];
    rep(i, 5) cin >> a[i];

    int ans = 1000;
    rep(i, 5) {
        int t = 0;
        rep(j, 5) {
            if (i == j) continue;
            t += a[j];
            while (t % 10 != 0) t++;
        }
        t += a[i];
        ans = min(ans, t);
    }

    cout << ans << endl;
    return 0;
}
