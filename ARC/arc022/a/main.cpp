#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    rep(i, s.size()) {
        if (ans == 0 && tolower(s[i]) == 'i') ans++;
        if (ans == 1 && tolower(s[i]) == 'c') ans++;
        if (ans == 2 && tolower(s[i]) == 't') ans++;
    }

    if (ans == 3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
