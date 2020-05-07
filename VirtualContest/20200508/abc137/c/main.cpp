#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, ll> m;

    rep(i, n) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        m[s]++;
    }

    ll ans = 0;
    for (auto s : m) {
        if (s.second >= 2) ans += s.second * (s.second - 1) / 2;
    }

    cout << ans << endl;
    return 0;
}
