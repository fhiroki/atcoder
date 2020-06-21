#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int l[n];
    rep(i, n) cin >> l[i];
    sort(l, l + n, greater<int>());

    int ans = 0;
    rep(i, k) ans += l[i];

    cout << ans << endl;
    return 0;
}
