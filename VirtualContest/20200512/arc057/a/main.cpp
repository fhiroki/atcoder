#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a, k;
    cin >> a >> k;

    ll ans = 0;
    if (k == 0) {
        ans = 2 * 1e12 - a;
        printf("%lld\n", ans);
        return 0;
    }

    while (a < 2 * 1e12) {
        a += 1 + k * a;
        ans++;
    }

    printf("%lld\n", ans);
    return 0;
}
