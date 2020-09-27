#include <bits/stdc++.h>

#include <atcoder/all>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

using namespace std;
using namespace atcoder;

const int MAX = 300005;
int op(int a, int b) { return max(a, b); }
int e() { return 0; }

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n) cin >> a[i];
    segtree<int, op, e> dp(MAX);

    rep(i, n) {
        int x = a[i];
        int l = x - k, r = x + k + 1;
        int now = dp.prod(max(l, 0), min(r, MAX)) + 1;
        dp.set(x, now);
    }

    cout << dp.all_prod() << endl;
    return 0;
}
