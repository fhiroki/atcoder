#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, bool> m;
    rep(i, n) {
        string s;
        cin >> s;

        if (s[0] == '!') {
            string t = s.substr(1);
            if (m.count(t) && m[t]) {
                cout << t << endl;
                return 0;
            } else
                m[t] = false;
        } else {
            if (m.count(s) && !m[s]) {
                cout << s << endl;
                return 0;
            } else
                m[s] = true;
        }
    }

    cout << "satisfiable" << endl;
    return 0;
}
