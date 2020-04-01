#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int x[n];
    rep(i, n) cin >> x[i];

    int ans = 1e9;
    for (int i = 0; i <= n - k; i++) {
        int l = x[i];
        int r = x[i + k - 1];
        ans = min(ans, r - l + min(abs(l), abs(r)));
    }

    cout << ans << endl;
    return 0;
}
