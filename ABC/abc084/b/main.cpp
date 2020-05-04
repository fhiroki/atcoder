#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b;
    string s;
    cin >> a >> b >> s;

    bool ok = true;
    rep(i, s.size()) {
        int c = s[i] - '0';
        if (i == a) {
            if (s[i] != '-') ok = false;
        } else {
            if (!(c >= 0 && c <= 9)) ok = false;
        }
    }

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
