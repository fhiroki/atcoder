#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    char x;
    string s;
    cin >> x >> s;

    rep(i, (int)s.size()) {
        if (s[i] != x) cout << s[i];
    }
    cout << endl;

    return 0;
}
