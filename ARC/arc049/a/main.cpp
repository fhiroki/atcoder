#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    int a[4];
    cin >> s;
    rep(i, 4) cin >> a[i];
    int n = s.size();

    rep(i, n) {
        rep(j, 4) if (a[j] == i) cout << '"';
        cout << s[i];
    }
    if (a[3] == n) cout << '"';
    cout << endl;

    return 0;
}
