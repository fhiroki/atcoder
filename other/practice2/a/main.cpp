#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

using namespace std;
using namespace atcoder;

int main() {
    int n, q;
    cin >> n >> q;

    dsu ds(n);
    rep(i, q) {
        int t, u, v;
        cin >> t >> u >> v;
        if (t == 0)
            ds.merge(u, v);
        else
            cout << ds.same(u, v) << endl;
    }

    return 0;
}
