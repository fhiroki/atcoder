#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int a[501][501];
int ans[501][501];

int main() {
    int n, m;
    cin >> n >> m;
    rep(i, n) rep(j, m) {
        char c;
        cin >> c;
        a[i][j] = c - '0';
    }

    rep(i, n) rep(j, m) {
        int cnt = a[i][j];
        if (cnt <= 0) continue;

        ans[i + 1][j] += cnt;
        a[i][j] -= cnt;
        a[i + 1][j + 1] -= cnt;
        a[i + 1][j - 1] -= cnt;
        a[i + 2][j] -= cnt;
    }

    rep(i, n) {
        rep(j, m) cout << ans[i][j];
        cout << endl;
    }
    return 0;
}
