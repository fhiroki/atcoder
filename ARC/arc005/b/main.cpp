#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    x--, y--;
    string w;
    cin >> w;
    char c[10][10];
    rep(i, 9) rep(j, 9) cin >> c[i][j];

    string ans;
    rep(i, 4) {
        ans += c[y][x];
        if (w.find('R') != string::npos) x++;
        if (w.find('L') != string::npos) x--;
        if (w.find('U') != string::npos) y--;
        if (w.find('D') != string::npos) y++;
        if (x > 8) x -= 2, w.erase(w.find('R'), 1), w += 'L';
        if (y > 8) y -= 2, w.erase(w.find('D'), 1), w += 'U';
        if (x < 0) x += 2, w.erase(w.find('L'), 1), w += 'R';
        if (y < 0) y += 2, w.erase(w.find('U'), 1), w += 'D';
    }

    cout << ans << endl;
    return 0;
}
