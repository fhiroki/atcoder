#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

vector<int> b[21];

int dfs(int v) {
    if (b[v].size() == 0) return 1;

    int minv = 1e9, maxv = 0;
    for (int e : b[v]) {
        minv = min(minv, dfs(e));
        maxv = max(maxv, dfs(e));
    }
    return minv + maxv + 1;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        b[x - 1].push_back(i);
    }

    cout << dfs(0) << endl;
    return 0;
}
