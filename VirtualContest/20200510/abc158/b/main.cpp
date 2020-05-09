#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;

    ll cnt = n / (a + b);
    ll ans = cnt * a;

    ll rest = n - (a + b) * cnt;
    if (rest <= a)
        ans += rest;
    else
        ans += a;

    cout << ans << endl;
    return 0;
}
