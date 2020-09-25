#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    char c[n][9];
    rep(y, n) rep(x, 9) cin >> c[y][x];

    int ans = 0;
    rep(x, 9) rep(y, n) {
        if (c[y][x] == 'x')
            ans++;
        else if (c[y][x] == 'o') {
            if (y == 0 || c[y - 1][x] != 'o')
                ans++;
            else
                continue;
        }
    }

    cout << ans << endl;
    return 0;
}
