#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n) cin >> a[i];

    int l = 0, r = 1e9;
    while (r - l > 1) {
        int m = (l + r) / 2;
        ll cnt = 0;
        rep(i, n) cnt += (a[i] - 1) / m;
        if (cnt <= k)
            r = m;
        else
            l = m;
    }

    cout << r << endl;
    return 0;
}
