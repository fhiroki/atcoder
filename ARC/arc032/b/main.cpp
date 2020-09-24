#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
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
    int n, m;
    cin >> n >> m;

    UnionFind uf(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        uf.merge(a, b);
    }

    set<int> s;
    rep(i, n) s.insert(uf.root(i));

    cout << s.size() - 1 << endl;
    return 0;
}
