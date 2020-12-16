#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int a[200005];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) cin >> a[i];
    sort(a, a + m + 1);
    a[m + 1] = n + 1;

    int k = 1e9;
    for (int i = 0; i <= m; i++) {
        int d = a[i + 1] - a[i] - 1;
        if (d != 0) k = min(k, d);
    }

    int ans = 0;
    for (int i = 0; i <= m; i++) {
        int d = a[i + 1] - a[i] - 1;
        if (d != 0) ans += ceil(d / double(k));
    }

    cout << ans << endl;
    return 0;
}
