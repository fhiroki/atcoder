#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double x[3], y[3];
    rep(i, 3) cin >> x[i] >> y[i];

    double ans =
        abs((x[1] - x[0]) * (y[2] - y[0]) - (y[1] - y[0]) * (x[2] - x[0])) /
        2.0;

    printf("%.1f\n", ans);
    return 0;
}
