#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    int t[n];
    rep(i, n) cin >> s[i] >> t[i];
    string x;
    cin >> x;

    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == x) break;
        ans += t[i];
    }

    cout << ans << endl;
    return 0;
}
