#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    int t;
    cin >> s >> t;

    int x = 0, y = 0, h = 0;
    rep(i, s.size()) {
        if (s[i] == 'U')
            y++;
        else if (s[i] == 'D')
            y--;
        else if (s[i] == 'R')
            x++;
        else if (s[i] == 'L')
            x--;
        else
            h++;
    }

    int ans = abs(x) + abs(y);
    if (t == 1)
        ans += h;
    else
        ans = (ans >= h) ? ans - h : (h - ans) % 2;

    cout << ans << endl;
    return 0;
}
