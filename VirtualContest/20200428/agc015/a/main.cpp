#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;

    ll ans = 0;
    if (n == 1)
        ans = a == b ? 1 : 0;
    else if (a <= b)
        ans = (n - 2) * (b - a) + 1;

    cout << ans << endl;
    return 0;
}
