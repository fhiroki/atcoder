#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    pair<int, int> p[n];
    rep(i, n) {
        int x, l;
        cin >> x >> l;
        p[i] = {x + l, x - l};
    }
    sort(p, p + n);

    int ans = 0, cur = -1e9;
    rep(i, n) {
        if (cur <= p[i].second) {
            ans++;
            cur = p[i].first;
        }
    }

    cout << ans << endl;
    return 0;
}
