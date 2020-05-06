#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    ll t = 1, cnt = 0;
    rep(i, s.size()) {
        if (s[i] == '0') t = 0;
        if (i == s.size() - 1 || s[i] == '+') {
            if (t == 1) cnt++;
            t = 1;
        }
    }

    cout << cnt << endl;
    return 0;
}
