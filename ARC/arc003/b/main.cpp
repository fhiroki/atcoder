#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    pair<string, string> p[n];
    rep(i, n) {
        string s;
        cin >> s;
        string rs(s);
        reverse(rs.begin(), rs.end());
        p[i] = {rs, s};
    }
    sort(p, p + n);

    rep(i, n) cout << p[i].second << endl;
    return 0;
}
