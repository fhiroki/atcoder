#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int m;
    cin >> m;
    double km = m / 1000.0;

    double ans = km;
    if (km < 0.1)
        ans = 0;
    else if (km <= 5)
        ans *= 10;
    else if (km >= 6 && km <= 30)
        ans += 50;
    else if (km >= 35 && km <= 70)
        ans = (ans - 30) / 5 + 80;
    else if (km > 70)
        ans = 89;

    if (ans < 10)
        cout << 0 << ans << endl;
    else
        cout << ans << endl;
    return 0;
}
