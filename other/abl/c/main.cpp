#include <bits/stdc++.h>

#include <atcoder/all>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

using namespace std;
using namespace atcoder;

int main() {
    int n, m;
    cin >> n >> m;

    dsu ds(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        ds.merge(a, b);
    }

    set<int> s;
    rep(i, n) s.insert(ds.leader(i));

    cout << s.size() - 1 << endl;
    return 0;
}
