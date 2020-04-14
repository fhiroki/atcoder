#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

bool w[105];
vector<int> v[105];

bool dfs(int x, int y) {
    w[x] = true;
    bool res = true;
    rep(i, v[x].size()) {
        int xi = v[x][i];
        if (xi == y) continue;
        if (w[xi]) return false;
        res &= dfs(xi, x);
    }
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    rep(i, m) {
        int s, t;
        cin >> s >> t;
        s--, t--;
        v[s].push_back(t);
        v[t].push_back(s);
    }

    int ans = 0;
    rep(i, n) {
        if (w[i]) continue;
        if (dfs(i, -1)) ans++;
    }

    cout << ans << endl;
    return 0;
}
