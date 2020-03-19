#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n], c[n];
    rep(i, n) cin >> v[i];
    rep(i, n) cin >> c[i];

    int ans = 0;
    for (int i = 0; i < (1 << n); i++) {
        int value = 0;
        rep(j, n) {
            if (i & (1 << j)) {
                value += v[j] - c[j];
            }
        }
        ans = max(ans, value);
    }

    cout << ans << endl;
    return 0;
}
