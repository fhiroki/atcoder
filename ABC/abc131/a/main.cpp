#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    bool ok = true;
    for (int i = 0; i < 3; i++) {
        if (s[i] == s[i+1]) ok = false;
    }

    if (ok) cout << "Good" << endl;
    else cout << "Bad" << endl;
    return 0;
}
