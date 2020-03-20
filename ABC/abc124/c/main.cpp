#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i-1] == s[i]) {
            s[i] = (s[i] == '0') ? '1' : '0';
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
