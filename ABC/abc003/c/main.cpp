#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int r[n];
    rep(i, n) cin >> r[i];
    sort(r, r + n);

    double ans = 0;
    for (int i = n - k; i < n; i++) {
        ans = (ans + r[i]) / 2.0;
    }

    printf("%.6f\n", ans);
    return 0;
}
