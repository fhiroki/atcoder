#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;

    ll ans = a / __gcd(a, b) * b;

    cout << ans << endl;
    return 0;
}
