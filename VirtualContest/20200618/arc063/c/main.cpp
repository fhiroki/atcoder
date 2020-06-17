#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    rep(i, s.size() - 1) if (s[i] != s[i + 1]) ans++;

    cout << ans << endl;
    return 0;
}
