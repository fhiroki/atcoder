#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    getline(cin, s);
    vector<string> v;

    string t = "";
    for (char c : s) {
        if (c == ' ')
            v.push_back(t), t = "";
        else
            t += c;
    }
    v.push_back(t);

    int n;
    cin >> n;
    string ng[n];
    rep(i, n) cin >> ng[i];

    rep(i, v.size()) {
        bool match = false;
        rep(j, n) {
            string t = v[i], o = ng[j];
            if (t.size() == o.size()) {
                bool ok = true;
                rep(k, t.size()) if (t[k] != o[k] && o[k] != '*') ok = false;
                if (ok) match = true;
            }
        }

        if (match) {
            rep(k, v[i].size()) cout << '*';
        } else {
            cout << v[i];
        }

        if (i != v.size() - 1) cout << ' ';
    }
    cout << endl;

    return 0;
}
