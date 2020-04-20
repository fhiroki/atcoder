#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    ll ans = 0;
    rep(i, m) {
        int a;
        cin >> a;
        ans += a;
    }

    cout << max(n - ans, -1ll) << endl;
    return 0;
}
