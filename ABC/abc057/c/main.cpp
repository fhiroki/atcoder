#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    size_t ans = 1e9;
    for (ll a = 1; a * a <= n; a++) {
        if (n % a != 0) continue;
        ans = min(ans, max(to_string(a).length(), to_string(n / a).length()));
    }

    cout << ans << endl;
    return 0;
}
