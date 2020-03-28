#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n];
    rep(i, n) cin >> p[i];

    int ans = 0;
    sort(p, p+n);
    rep(i, n) {
        if (i == n-1) ans += p[i]/2;
        else ans += p[i];
    }

    cout << ans << endl;
    return 0;
}
