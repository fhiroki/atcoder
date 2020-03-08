#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int c[n-1];

    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n-1) cin >> c[i];

    int ans = 0;
    rep(i, n) ans += b[i];
    rep(i, n - 1) {
        if (a[i] == a[i + 1] - 1) {
            ans += c[a[i] - 1];
        }
    }

    cout << ans << endl;
    return 0;
}
