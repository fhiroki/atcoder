#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    const int MOD = 1e9 + 7;

    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    ll ans = 3;
    rep(i, n) {
        bool a = s1[i - 1] == s2[i - 1];
        if (s1[i] == s2[i]) {
            if (i > 0 && a) ans = ans * 2 % MOD;
        } else {
            ans = ans * (a ? 2 : 3) % MOD;
            i++;
        }
    }

    cout << ans << endl;
    return 0;
}
