#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double r, d;
    cin >> r >> d;
    const double PI = 3.1415926535;

    printf("%.10f\n", r * r * PI * d * 2 * PI);
    return 0;
}
