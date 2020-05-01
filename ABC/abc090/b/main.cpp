#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i = a; i <= b; i++) {
        string s = to_string(i);
        if (s[0] == s[4] && s[1] == s[3]) ans++;
    }

    cout << ans << endl;
    return 0;
}
