#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int const MOD = 1e9 + 7;
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;

    ll ans = 3;
    rep(i, n) {
        bool prev = s1[i - 1] == s2[i - 1];
        if (s1[i] == s2[i]) {
            if (i > 0 && prev) ans = ans * 2 % MOD;
        } else
            ans = ans * (prev ? 2 : 3) % MOD, i++;
    }

    cout << ans << endl;
    return 0;
}
