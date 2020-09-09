#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    rep(i, (int)s.size()) {
        int n = s[i] - '0';
        if (n >= 0 && n <= 9) cout << n;
    }
    cout << endl;

    return 0;
}
