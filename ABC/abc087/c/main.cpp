#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[2][n];
    rep(i, n) cin >> a[0][i];
    rep(i, n) cin >> a[1][i];

    int ans = 0;
    rep(i, n) {
        int cnt = 0;
        for (int j = 0; j <= i; j++) cnt += a[0][j];
        for (int j = i; j < n; j++) cnt += a[1][j];
        ans = max(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}
