#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size();

    rep(i, n) {
        if (s == t) break;
        string ns;
        ns += s[n - 1];
        rep(i, n - 1) ns += s[i];
        s = ns;
    }

    if (s == t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
