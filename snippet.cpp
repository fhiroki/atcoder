#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
const int MOD = 1e9 + 7;

// 繰り返し２乗法
int power(ll n, ll p) {
    if (p == 0) return 1;
    if (p % 2 == 0) {
        ll t = power(n, p / 2);
        return t * t % MOD;
    }
    return n * power(n, p - 1) % MOD;
}

int nCr(int n, int r) {
    ll x = 1, y = 1;
    rep(i, r) {
        x = x * (n - i) % MOD;
        y = y * (i + 1) % MOD;
    }
    return x * power(y, MOD - 2) % MOD;
}

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

bool eratosthenes(int n, int c[]) {
    for (int i = 2; i < n; i++) {
        int cnt = 0;
        for (int j = i; j < n; j += i) cnt += c[i];
        if (cnt > 1) return true;
    }
    return false;
}
