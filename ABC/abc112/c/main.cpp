#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, t;
    cin >> n;
    int x[n], y[n], h[n];
    rep(i, n) {
        cin >> x[i] >> y[i] >> h[i];
        if (h[i] > 0) t = i;
    }

    rep(cx, 101) rep(cy, 101) {
        bool ok = true;
        int hx = h[t] + abs(x[t] - cx) + abs(y[t] - cy);
        rep(i, n) {
            if (h[i] != max(hx - abs(x[i] - cx) - abs(y[i] - cy), 0))
                ok = false;
        }
        if (ok) {
            printf("%d %d %d\n", cx, cy, hx);
            return 0;
        }
    }
}
