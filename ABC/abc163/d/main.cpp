#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    const int MOD = 1e9 + 7;
    ll n, k;
    cin >> n >> k;

    ll ans = 0;
    for (int i = k; i < n + 2; i++) {
        ans = (ans + i * (n - i + 1) + 1) % MOD;
    }

    cout << ans << endl;
    return 0;
}
