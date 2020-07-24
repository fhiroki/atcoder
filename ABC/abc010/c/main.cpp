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
        double d1 = sqrt(pow(txa - x, 2) + pow(tya - y, 2));
        double d2 = sqrt(pow(txb - x, 2) + pow(tyb - y, 2));
        if (d1 + d2 <= t * v) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
