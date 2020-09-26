#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
using namespace atcoder;

int main() {
    int n, q;
    cin >> n >> q;
    fenwick_tree<ll> fw(n);
    rep(i, n) {
        int x;
        cin >> x;
        fw.add(i, x);
    }

    rep(i, q) {
        int t;
        cin >> t;
        if (t == 0) {
            int p, x;
            cin >> p >> x;
            fw.add(p, x);
        } else {
            int l, r;
            cin >> l >> r;
            cout << fw.sum(l, r) << endl;
        }
    }

    return 0;
}
