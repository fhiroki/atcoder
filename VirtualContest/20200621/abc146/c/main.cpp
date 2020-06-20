#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a, b, x;
    cin >> a >> b >> x;

    ll l = 0, r = 1e9 + 1;
    while (r - l > 1) {
        ll mid = (l + r) / 2;
        if (a * mid + b * to_string(mid).length() <= x)
            l = mid;
        else
            r = mid;
    }

    cout << l << endl;
    return 0;
}
