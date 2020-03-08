#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    int ok = true;
    string rud = "RUD";
    string lud = "LUD";
    rep(i, s.size()) {
        if (i % 2 == 0) {
            if (!lud.find(s[i])) ok = false;
        } else {
            if (!rud.find(s[i])) ok = false;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
