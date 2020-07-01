#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n], a[n];
    rep(i, n) cin >> x[i] >> y[i];
    rep(i, n) a[i] = i;

    double ans = 0;
    int cnt = 0;
    do {
        rep(i, n - 1) {
            double dx = pow(x[a[i]] - x[a[i + 1]], 2);
            double dy = pow(y[a[i]] - y[a[i + 1]], 2);
            ans += sqrt(dx + dy);
        }
        cnt++;
    } while (next_permutation(a, a + n));

    printf("%.10f\n", ans / cnt);
    return 0;
}
