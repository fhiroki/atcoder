#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    bool ok = false;
    if (s[0] == s[1] && s[2] == s[3]) ok = true;
    if (s[0] == s[2] && s[1] == s[3]) ok = true;
    if (s[0] == s[3] && s[1] == s[2]) ok = true;
    if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3]) ok = false;

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
