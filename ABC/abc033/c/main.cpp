#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    bool find = false;
    for (int i = 0; i < s.size(); i += 2) {
        if (s[i] == '0') find = true;
        if (i == s.size() - 1 || s[i + 1] == '+') {
            if (!find) ans++;
            find = false;
        }
    }

    cout << ans << endl;
    return 0;
}
