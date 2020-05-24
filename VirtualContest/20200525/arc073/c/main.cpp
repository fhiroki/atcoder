#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, T;
    cin >> n >> T;
    int t[n];
    rep(i, n) cin >> t[i];

    ll ans = T;
    for (int i = 1; i < n; i++) {
        if (t[i] - t[i-1] < T) ans += t[i] - t[i-1];
        else ans += T;
    }

    cout << ans << endl;
    return 0;
}
