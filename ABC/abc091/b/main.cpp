#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n;
    map<string, int> c;
    rep(i, n) {
        string s;
        cin >> s;
        c[s]++;
    }

    cin >> m;
    rep(i, m) {
        string t;
        cin >> t;
        c[t]--;
    }

    int ans = 0;
    for (auto a : c) {
        ans = max(ans, a.second);
    }

    cout << ans << endl;
    return 0;
}
