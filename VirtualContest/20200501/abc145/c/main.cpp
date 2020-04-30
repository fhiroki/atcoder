#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    double x[n];
    double y[n];
    rep(i, n) cin >> x[i] >> y[i];

    int idx[n];
    rep(i, n) idx[i] = i;

    double ans = 0;
    int cnt = 0;
    do {
        cnt++;
        rep(i, n - 1) {
            int lx = pow(x[idx[i + 1]] - x[idx[i]], 2);
            int ly = pow(y[idx[i + 1]] - y[idx[i]], 2);
            ans += sqrt(lx + ly);
        }
    } while (next_permutation(idx, idx + n));

    printf("%.10f\n", ans / cnt);
    return 0;
}
