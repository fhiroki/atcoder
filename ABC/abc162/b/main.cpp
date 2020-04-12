#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    ll ans = 0;
    rep(i, n) {
        if (i % 3 != 0 && i % 5 != 0) ans += i;
    }

    cout << ans << endl;
    return 0;
}
