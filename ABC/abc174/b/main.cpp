#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    int ans = 0;
    rep(i, n) {
        ll x, y;
        cin >> x >> y;
        if (sqrt(x * x + y * y) <= d) ans++;
    }

    cout << ans << endl;
    return 0;
}
