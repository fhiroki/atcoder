#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    string w = "atcoder";

    int n = s.size();
    bool ok = true;

    rep(i, n) {
        if (s[i] == t[i]) continue;

        bool match = false;
        if (s[i] == '@') {
            for (char c : w) {
                if (c == t[i]) match = true;
            }
        }
        if (t[i] == '@') {
            for (char c : w) {
                if (c == s[i]) match = true;
            }
        }
        if (!match) ok = false;
    }

    if (ok)
        cout << "You can win" << endl;
    else
        cout << "You will lose" << endl;
    return 0;
}
