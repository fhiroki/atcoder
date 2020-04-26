#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n];
    rep(i, n) cin >> t[i];

    int ans = 1000;
    for (int bit = 0; bit < (1 << n); bit++) {
        int a = 0, b = 0;
        rep(i, n) {
            if (bit & (1 << i))
                a += t[i];
            else
                b += t[i];
        }
        ans = min(ans, max(a, b));
    }

    cout << ans << endl;
    return 0;
}
