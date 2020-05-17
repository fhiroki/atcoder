#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v[100010];
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    vector<int> dist(n, -1);
    queue<int> que;

    dist[0] = 0;
    que.push(0);

    while (!que.empty()) {
        int i = que.front();
        que.pop();

        for (int nv : v[i]) {
            if (dist[nv] != -1) continue;

            dist[nv] = i + 1;
            que.push(nv);
        }
    }

    bool ok = true;
    rep(i, n) if (dist[i] == -1) ok = false;
    if (ok) {
        cout << "Yes" << endl;
        for (int i = 1; i < n; i++) cout << dist[i] << endl;
    } else
        cout << "No" << endl;

    return 0;
}
