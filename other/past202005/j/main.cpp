#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<ll> maxv(n, 0);
    vector<int> v(m, -1);

    rep(i, m) {
        ll a;
        cin >> a;
        auto iter = lower_bound(maxv.rbegin(), maxv.rend(), a);
        int idx = maxv.rend() - iter;
        maxv[idx] = a;

        if (idx == n)
            cout << -1 << endl;
        else
            cout << idx + 1 << endl;
    }

    return 0;
}
