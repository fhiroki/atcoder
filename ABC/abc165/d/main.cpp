#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a, b, n;
    cin >> a >> b >> n;

    ll x = n < b ? n : b - 1;
    ll ans = floor((a * x) / b) - a * floor(x / b);

    cout << ans << endl;
    return 0;
}
