#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    const int MOD = 1e9 + 7;

    ll ans = 1;
    for (int i = k; i <= n; i++) {
        ans = (ans + i * (n - i + 1) + 1) % MOD;
    }

    cout << ans << endl;
    return 0;
}
