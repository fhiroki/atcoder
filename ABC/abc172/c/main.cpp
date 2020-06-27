#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

ll a[200005], b[200005];

int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        ll A;
        cin >> A;
        a[i] = a[i - 1] + A;
    }
    for (int i = 1; i <= m; i++) {
        ll B;
        cin >> B;
        b[i] = b[i - 1] + B;
    }

    int ans = 0;
    for (int i = 0; i <= n; i++) {
        if (a[i] > k) break;
        int j = upper_bound(b + 1, b + m + 1, k - a[i]) - b - 1;
        ans = max(ans, i + j);
    }

    cout << ans << endl;
    return 0;
}
