#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size();

    int ans = 0;
    rep(i, n) if (s[i] != t[i]) ans++;

    cout << ans << endl;
    return 0;
}
