#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a[3];
    rep(i, 3) cin >> a[i];

    int ans = 0;
    while (!(a[0] == a[1] && a[1] == a[2])) {
        int m = *max_element(a, a + 3);
        int mc = count(a, a + 3, m);
        rep(i, 3) if (a[i] != m) mc == 1 ? a[i]++ : a[i] += 2;
        ans++;
    }

    cout << ans << endl;
    return 0;
}
