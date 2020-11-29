#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int ans = x;
    if (b < a)
        ans += (a - b - 1) * min(x * 2, y);
    else
        ans += (b - a) * min(x * 2, y);

    cout << ans << endl;
    return 0;
}
