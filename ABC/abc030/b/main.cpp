#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    n %= 12;
    double s = 30 * n + 0.5 * m;
    double l = 6 * m;

    double ans = abs(l - s);

    cout << min(ans, 360 - ans) << endl;
    return 0;
}
