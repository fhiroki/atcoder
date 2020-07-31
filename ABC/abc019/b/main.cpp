#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    string ans;
    int cnt = 1;
    rep(i, n) {
        if (s[i] == s[i + 1])
            cnt++;
        else {
            ans += s[i] + to_string(cnt);
            cnt = 1;
        }
    }

    cout << ans << endl;
    return 0;
}
