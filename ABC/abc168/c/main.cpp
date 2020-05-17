#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double a, b, h, m;
    cin >> a >> b >> h >> m;

    double deg = abs(h * (360.0 / 12) + m * (30.0 / 60) - m * (360.0 / 60));
    double rad = deg * (M_PI / 180.0);
    double ans = sqrt(a * a + b * b - 2.0 * a * b * cos(rad));

    printf("%.10f\n", ans);
    return 0;
}
