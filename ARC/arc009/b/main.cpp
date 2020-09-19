#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int n;
int a[1000], b[10];

bool cmp(int x, int y) {
    string xs = to_string(x);
    string ys = to_string(y);
    int xlen = xs.length();
    int ylen = ys.length();

    if (xlen != ylen) {
        return xlen < ylen;
    } else {
        rep(i, xlen) {
            if (xs[i] == ys[i]) continue;
            rep(j, 10) {
                if (xs[i] - '0' == b[j]) return true;
                if (ys[i] - '0' == b[j]) return false;
            }
        }
    }
    return true;
}

int main() {
    rep(i, 10) cin >> b[i];
    cin >> n;
    rep(i, n) cin >> a[i];

    sort(a, a + n, cmp);
    rep(i, n) cout << a[i] << endl;
    return 0;
}
