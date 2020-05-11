#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int txa, tya, txb, tyb, t, v, n;
    cin >> txa >> tya >> txb >> tyb >> t >> v >> n;

    rep(i, n) {
        int x, y;
        cin >> x >> y;
        double l = 0;
        l += sqrt(pow(txa - x, 2.0) + pow(tya - y, 2.0));
        l += sqrt(pow(txb - x, 2.0) + pow(tyb - y, 2.0));
        if (l <= t * v) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
