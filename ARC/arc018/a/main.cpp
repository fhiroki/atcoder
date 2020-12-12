#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double h, bmi;
    cin >> h >> bmi;

    double ans = bmi * h * h / 10000;

    printf("%.3f\n", ans);
    return 0;
}
