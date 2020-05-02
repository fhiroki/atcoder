#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    ll ans = 0;
    rep(i, n) {
        if (s[i] == 'U')
            ans += (n - i - 1) + 2 * i;
        else
            ans += 2 * (n - i - 1) + i;
    }

    cout << ans << endl;
    return 0;
}
