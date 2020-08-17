#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll x, k, d;
    cin >> x >> k >> d;
    x = abs(x);

    ll a = min(k, x / d);
    x -= a * d;

    if ((k - a) % 2 == 0)
        cout << x << endl;
    else
        cout << d - x << endl;

    return 0;
}
