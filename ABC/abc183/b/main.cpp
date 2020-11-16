#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;

    double ans = (gx - sx) / (gy + sy) * sy + sx;

    printf("%.10f\n", ans);
    return 0;
}
