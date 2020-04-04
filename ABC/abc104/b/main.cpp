#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    bool ok = true;
    if (s[0] != 'A') ok = false;
    if (count(s.begin() + 2, s.end() - 1, 'C') != 1) ok = false;
    rep(i, n) {
        if (s[i] != 'A' && s[i] != 'C') {
            if (!islower(s[i])) ok = false;
        }
    }

    if (ok)
        cout << "AC" << endl;
    else
        cout << "WA" << endl;
    return 0;
}
