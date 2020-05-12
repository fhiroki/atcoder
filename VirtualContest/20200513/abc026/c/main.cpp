#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

vector<int> a[21];

int dfs(int b) {
    if (a[b].size() == 0) return 1;

    int mx = 0, mn = 1e9;
    for (auto v : a[b]) {
        int s = dfs(v);
        mx = max(mx, s);
        mn = min(mn, s);
    }

    return mx + mn + 1;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i < n; i++) {
        int b;
        cin >> b;
        a[b - 1].push_back(i);
    }

    cout << dfs(0) << endl;
    return 0;
}
