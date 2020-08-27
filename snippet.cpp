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

    UnionFind(int n) : par(n) { rep(i, n) par[i] = i; }

    int root(int x) {
        if (par[x] == x)
            return x;
        else
            par[x] = root(par[x]);
    }

    void merge(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return;
        par[x] = y;
    }

    bool save(int x, int y) { return root(x) == root(y); }
};
