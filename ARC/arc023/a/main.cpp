#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int calc_date(int y, int m, int d) {
    if (m == 1 || m == 2) y--, m += 12;
    return 365 * y + y / 4 - y / 100 + y / 400 + (306 * (m + 1) / 10) + d - 429;
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    int ans = calc_date(2014, 5, 17) - calc_date(y, m, d);

    cout << ans << endl;
    return 0;
}
