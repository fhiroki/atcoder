#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int x[m], xd[m-1];
    rep(i, m) cin >> x[i];

    sort(x, x+m);
    rep(i, m-1) xd[i] = x[i+1] - x[i];
    sort(xd, xd+m-1);

    int ans = 0;
    rep(i, m-n) ans += xd[i];

    cout << ans << endl;
    return 0;
}
