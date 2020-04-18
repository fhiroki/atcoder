#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a[3];
    rep(i, 3) cin >> a[i];

    int ans = 0;

    while (true) {
        int maxv = *max_element(a, a + 3);
        int cnt = count(a, a + 3, maxv);

        if (cnt == 1) {
            rep(i, 3) if (a[i] != maxv) a[i]++;
        } else if (cnt == 2) {
            rep(i, 3) if (a[i] != maxv) a[i] += 2;
        } else
            break;

        ans++;
    }

    cout << ans << endl;
    return 0;
}
