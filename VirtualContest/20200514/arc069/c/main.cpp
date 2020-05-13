#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;

    ll ans = 0;
    if (n <= m / 2) {
        ans += n;
        m -= n * 2;
        ans += m / 4;
    } else {
        ans = m / 2;
    }

    cout << ans << endl;
    return 0;
}
