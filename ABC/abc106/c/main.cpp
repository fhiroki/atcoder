#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    ll k;
    cin >> s >> k;

    char ans = '1';
    if (k == 1 || s.size() == 1)
        ans = s[0];
    else {
        rep(i, s.size()) {
            if (s[i] != '1') {
                ans = s[i];
                break;
            }
        }
    }

    if (k <= s.size()) {
        bool one = true;
        rep(i, k) if (s[i] != '1') one = false;
        if (one) ans = '1';
    }

    cout << ans << endl;
    return 0;
}
