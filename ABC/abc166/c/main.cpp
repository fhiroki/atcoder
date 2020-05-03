#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int h[n];
    rep(i, n) cin >> h[i];
    vector<int> v[n];

    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int ans = 0;
    rep(i, n) {
        bool ok = true;
        for (auto c : v[i])
            if (h[c] >= h[i]) ok = false;
        if (ok) ans++;
    }

    cout << ans << endl;
    return 0;
}
