#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
const int MOD = 998244353;

int cnt[100005];

int main() {
    int n;
    cin >> n;

    rep(i, n) {
        int d;
        cin >> d;
        if (i == 0 && d != 0) {
            cout << 0 << endl;
            return 0;
        }
        cnt[d]++;
    }
    if (cnt[0] != 1) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = 1;
    for (int i = 1; i < n; i++) {
        rep(j, cnt[i]) {
            ans *= cnt[i - 1];
            ans %= MOD;
        }
    }

    cout << ans << endl;
    return 0;
}
