#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll x, y;
    cin >> x >> y;

    int ans = 0;
    while (x <= y) {
        ans++;
        x *= 2;
    }

    cout << ans << endl;
    return 0;
}
