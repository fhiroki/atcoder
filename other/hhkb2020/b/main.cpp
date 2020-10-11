#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    string s[h];
    rep(i, h) cin >> s[i];

    int ans = 0;
    rep(i, h) rep(j, w) {
        if (s[i][j] == '.') {
            if (i != h - 1 && s[i + 1][j] == '.') ans++;
            if (j != w - 1 && s[i][j + 1] == '.') ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
