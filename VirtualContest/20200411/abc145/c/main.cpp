#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n], c[n];
    rep(i, n) cin >> x[i] >> y[i];
    rep(i, n) c[i] = i;

    double ans = 0.0, cnt = 0;
    do {
        rep(i, n - 1) {
            int lx = pow(x[c[i]] - x[c[i + 1]], 2.0);
            int ly = pow(y[c[i]] - y[c[i + 1]], 2.0);
            ans += sqrt(lx + ly);
        }
        cnt++;
    } while (next_permutation(c, c + n));

    printf("%.10f\n", ans / cnt);
    return 0;
}
