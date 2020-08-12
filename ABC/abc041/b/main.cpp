#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int const MOD = 1e9 + 7;
    ll a, b, c;
    cin >> a >> b >> c;

    int ans = a * b % MOD * c % MOD;

    cout << ans << endl;
    return 0;
}
