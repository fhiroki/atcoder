#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
using namespace atcoder;

int main() {
    int t;
    cin >> t;

    rep(i, t) {
        ll n, m, a, b;
        cin >> n >> m >> a >> b;

        cout << floor_sum(n, m, a, b) << endl;
    }

    return 0;
}
