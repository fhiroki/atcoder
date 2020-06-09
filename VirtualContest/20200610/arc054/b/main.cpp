#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double p;
    cin >> p;
    double c = 0.462098;
    double x = log(c * p) / c;

    double ans = x + pow(2, -x / 1.5) * p;
    if (x < 0) ans = p;

    printf("%.10f\n", ans);
    return 0;
}
