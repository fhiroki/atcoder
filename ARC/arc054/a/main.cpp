#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double l, x, y, s, d;
    cin >> l >> x >> y >> s >> d;

    double ans = 0;
    if (s <= d) {
        ans = (d - s) / (x + y);
        if (y > x) ans = min(ans, (l - d + s) / (y - x));
    } else {
        ans = (l - s + d) / (x + y);
        if (y > x) ans = min(ans, (s - d) / (y - x));
    }

    printf("%.10f\n", ans);
    return 0;
}
