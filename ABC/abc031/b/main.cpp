#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int l, h, n;
    cin >> l >> h >> n;

    rep(i, n) {
        int a;
        cin >> a;
        int ans = 0;
        if (a < l)
            ans = l - a;
        else if (a > h)
            ans = -1;
        cout << ans << endl;
    }
    return 0;
}
