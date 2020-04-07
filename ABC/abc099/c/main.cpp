#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i <= n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = n;
    rep(i, n) {
        int cc = 0, l = i, r = n - i;
        while (l > 0) cc += l % 6, l /= 6;
        while (r > 0) cc += r % 9, r /= 9;
        if (ans > cc) ans = cc;
    }

    cout << ans << endl;
    return 0;
}
