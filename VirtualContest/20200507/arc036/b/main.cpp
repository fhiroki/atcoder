#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n], d[n - 1];
    rep(i, n) cin >> h[i];
    rep(i, n - 1) d[i] = h[i] < h[i + 1];

    bool up = d[0];
    int ans = 0, t = 0;
    rep(i, n - 1) {
        if (up) {
            t++;
            if (!d[i]) up = false;
        } else {
            if (d[i])
                up = true, t = 1;
            else
                t++;
        }
        ans = max(ans, t);
    }

    cout << ans + 1 << endl;
    return 0;
}
