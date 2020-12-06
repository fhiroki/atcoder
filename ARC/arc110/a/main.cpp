#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    ll ans = 1;
    for (int i = 2; i <= n; i++) {
        ans = ans / gcd(ans, i) * i;
    }

    cout << ans + 1 << endl;
    return 0;
}
