#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int s[n];
    rep(i, n) cin >> s[i];
    sort(s, s + n);

    int ans = 0;
    rep(i, n) ans += s[i];

    if (ans % 10 == 0) {
        rep(i, n) {
            if (s[i] % 10 != 0) {
                ans -= s[i];
                break;
            }
        }
    }

    if (ans % 10 == 0)
        cout << 0 << endl;
    else
        cout << ans << endl;
    return 0;
}
