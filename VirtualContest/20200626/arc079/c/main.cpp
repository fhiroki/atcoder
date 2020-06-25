#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v[n];
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        v[a].push_back(b);
    }

    for (auto first : v[0]) {
        for (auto second : v[first]) {
            if (second == n - 1) {
                cout << "POSSIBLE" << endl;
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
