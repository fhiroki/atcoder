#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int a[101];

int main() {
    int n, q;
    cin >> n >> q;

    rep(i, q) {
        int l, r, t;
        cin >> l >> r >> t;
        for (int i = l - 1; i < r; i++) a[i] = t;
    }

    rep(i, n) cout << a[i] << endl;

    return 0;
}
