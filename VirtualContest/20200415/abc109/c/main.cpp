#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, X;
    cin >> n >> X;
    int x[n + 1];
    rep(i, n) cin >> x[i];
    x[n] = X;
    sort(x, x + n + 1);

    int ans = x[1] - x[0];
    for (int i = 1; i < n; i++) {
        ans = __gcd(ans, x[i + 1] - x[i]);
    }

    cout << ans << endl;
    return 0;
}
