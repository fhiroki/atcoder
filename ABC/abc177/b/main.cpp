#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int ans = 0;
    rep(i, s.size() - t.size() + 1) {
        int cnt = 0;
        rep(j, t.size()) if (s[i + j] == t[j]) cnt++;
        ans = max(ans, cnt);
    }

    cout << t.size() - ans << endl;
    return 0;
}
