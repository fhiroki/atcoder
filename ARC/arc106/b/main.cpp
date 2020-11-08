#include <bits/stdc++.h>

#include <atcoder/all>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
using namespace atcoder;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[n];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    dsu uf(n);
    rep(i, m) {
        int c, d;
        cin >> c >> d;
        uf.merge(c - 1, d - 1);
    }

    for (auto g : uf.groups()) {
        ll s = 0;
        for (int i : g) s += a[i] - b[i];
        if (s != 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
