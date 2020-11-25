#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int ans = max(0, 4 - x) * 100000 + max(0, 4 - y) * 100000;
    if (x == 1 && y == 1) ans += 400000;

    cout << ans << endl;
    return 0;
}
