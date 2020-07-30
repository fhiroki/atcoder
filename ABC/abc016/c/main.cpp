#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<set<int>> v(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        if (a == b) continue;
        a--, b--;
        v[a].insert(b);
        v[b].insert(a);
    }

    rep(i, n) {
        set<int> ans;
        for (auto first : v[i]) {
            for (auto second : v[first]) {
                if (i == second) continue;
                bool ok = true;
                for (auto third : v[second]) {
                    if (i == third) ok = false;
                }
                if (ok) ans.insert(second);
            }
        }
        cout << ans.size() << endl;
    }

    return 0;
}
