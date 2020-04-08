#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

set<char> countStr(string s) {
    set<char> a;
    rep(i, s.size()) { a.insert(s[i]); }
    return a;
}

int main() {
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 1; i < n; i++) {
        int match = 0;
        set<char> L = countStr(s.substr(0, i));
        set<char> R = countStr(s.substr(i, n));
        for (auto l : L) {
            for (auto r : R) {
                if (l == r) match++;
            }
        }
        ans = max(ans, match);
    }

    cout << ans << endl;
    return 0;
}
