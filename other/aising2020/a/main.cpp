#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int l, r, d;
    cin >> l >> r >> d;

    int ans = 0;
    for (int i = l; i <= r; i++) {
        if (i % d == 0) ans++;
    }

    cout << ans << endl;
    return 0;
}
