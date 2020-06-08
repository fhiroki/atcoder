#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a[n];

    rep(i, m) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    int c[n];
    rep(i, n) cin >> c[i];
    rep(i, q) {
        int op, x, y;
        cin >> op >> x;
        x--;
        cout << c[x] << endl;

        if (op == 1) {
            for (auto e : a[x]) c[e] = c[x];
        } else {
            cin >> y;
            c[x] = y;
        }
    }

    return 0;
}
