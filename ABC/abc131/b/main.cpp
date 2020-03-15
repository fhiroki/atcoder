#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    int ans = 0;
    int minv = 101;
    rep(i, n) {
        int t = l + i;
        minv = min(minv, abs(t));
    }

    rep(i, n) {
        int t = l + i;
        if (abs(t) != minv) ans += t;
    }

    cout << ans << endl;
    return 0;
}
