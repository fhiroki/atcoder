#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a[3];
    rep(i, 3) cin >> a[i];

    int maxv = max({a[0], a[1], a[2]});
    int minv = min({a[0], a[1], a[2]});

    rep(i, 3) {
        int ans = 2;
        if (a[i] == maxv)
            ans = 1;
        else if (a[i] == minv)
            ans = 3;
        cout << ans << endl;
    }
    return 0;
}
