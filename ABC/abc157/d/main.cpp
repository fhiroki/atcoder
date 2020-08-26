#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

struct UnionFind {
    vector<int> par;

    UnionFind(int n) : par(n, -1) {}

    int root(int x) {
        if (par[x] < 0)
            return x;
        else
            return par[x] = root(par[x]);
    }

    bool same(int x, int y) { return root(x) == root(y); }

    void merge(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return;
        if (par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
    }

    int size(int x) { return -par[root(x)]; }
};

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<set<int>> v(n);
    UnionFind uf(n);

    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        v[a].insert(b);
        v[b].insert(a);
        uf.merge(a, b);
        cout << endl;
    }

    rep(i, k) {
        int c, d;
        cin >> c >> d;
        c--, d--;
        if (!uf.same(c, d)) continue;
        v[c].insert(d);
        v[d].insert(c);
    }

    rep(i, n) {
        cout << uf.size(i) - v[i].size() - 1;
        if (i == n - 1)
            cout << endl;
        else
            cout << ' ';
    }

    return 0;
}
