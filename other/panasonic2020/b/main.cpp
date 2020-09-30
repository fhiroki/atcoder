#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll h, w;
    cin >> h >> w;

    ll ans = ceil((h * w) / 2.0);
    if (h == 1 || w == 1) ans = 1;

    cout << ans << endl;
    return 0;
}
