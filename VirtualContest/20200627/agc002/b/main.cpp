#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> red(n, 0);
    vector<int> white(n, 1);
    red[0] = 1;

    rep(i, m) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        if (red[x]) red[y] = 1;
        white[x] -= 1;
        white[y] += 1;
        if (white[x] == 0) red[x] = 0;
    }

    int ans = 0;
    rep(i, n) if (red[i] == 1) ans++;

    cout << ans << endl;
    return 0;
}
