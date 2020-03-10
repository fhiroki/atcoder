#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, ll> S;

    ll ans = 0;
    rep(i, n) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        S[s]++;
    }

    for (auto s: S) {
        if (s.second == 1) continue;
        ans += s.second * (s.second-1) / 2;
    }

    cout << ans << endl;
    return 0;
}
