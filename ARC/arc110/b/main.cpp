#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    string t;
    cin >> n >> t;

    ll ans = 0;
    if (t == "1") {
        ans = 2e10;
        cout << ans << endl;
        return 0;
    }

    string s;
    rep(i, t.size()) s += "110";
    if (s.find(t) == string::npos) {
        ans = 0;
    } else {
        ans = 1e10 - count(t.begin(), t.end(), '0');
        if (t[t.size() - 1] == '0') ans++;
    }

    cout << ans << endl;
    return 0;
}
