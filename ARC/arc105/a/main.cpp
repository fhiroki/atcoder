#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a[4];
    rep(i, 4) cin >> a[i];

    for (int bit = 0; bit < (1 << 4); bit++) {
        int s = 0, t = 0;
        rep(i, 4) {
            if (bit & (1 << i))
                s += a[i];
            else
                t += a[i];
        }
        if (s == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
