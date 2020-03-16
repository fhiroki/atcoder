#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double w, h, x, y;
    cin >> w >> h >> x >> y;

    double ans = w * h / 2.0;
    bool mul = false;
    if (w / 2.0 == x && h / 2.0 == y) mul = true;

    printf("%f %d\n", ans, mul);
    return 0;
}
