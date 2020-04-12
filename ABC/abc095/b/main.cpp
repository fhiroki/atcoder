#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int m[n];
    rep(i, n) cin >> m[i];

    int sum = 0, ans = n;
    rep(i, n) sum += m[i];
    ans += (x - sum) / *min_element(m, m + n);

    cout << ans << endl;
    return 0;
}
