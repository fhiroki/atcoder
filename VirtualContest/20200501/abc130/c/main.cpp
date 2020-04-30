#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double w, h, x, y;
    cin >> w >> h >> x >> y;

    double ans = w * h / 2;
    bool many = w / 2 == x && h / 2 == y;

    printf("%f %d\n", ans, many);
    return 0;
}
