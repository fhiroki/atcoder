#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a, b, k, l;
    cin >> a >> b >> k >> l;

    ll ans = 0;
    if (b / double(l) < a) {
        ans += k / l * b;
        int cnt = k % l;
        if (cnt > 0) {
            if (cnt * a < b)
                ans += cnt * a;
            else
                ans += b;
        };
    } else
        ans += k * a;

    cout << ans << endl;
    return 0;
}
