#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

vector<int> t[200001];
int cnt[200001];

void dfs(int v, int p) {
    for (auto a : t[v]) {
        if (a == p) continue;
        cnt[a] += cnt[v];
        dfs(a, v);
    }
}

int main() {
    int n, q;
    cin >> n >> q;

    rep(i, n - 1) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        t[a].push_back(b);
        t[b].push_back(a);
    }

    rep(i, q) {
        int p, x;
        cin >> p >> x;
        cnt[p - 1] += x;
    }

    dfs(0, -1);

    rep(i, n) {
        cout << cnt[i];
        if (i != n - 1) cout << ' ';
    }
    cout << endl;

    return 0;
}
