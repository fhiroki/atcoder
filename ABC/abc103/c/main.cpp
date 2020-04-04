#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    ll ans = 0;
    rep(i, n) {
        int a;
        cin >> a;
        ans += a - 1;
    }

    cout << ans << endl;
    return 0;
}
