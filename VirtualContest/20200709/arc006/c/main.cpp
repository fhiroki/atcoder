#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<stack<int>> v;
    rep(i, n) {
        int w;
        cin >> w;

        int minv = 1e9, idx = -1, j = 0;
        for (auto e : v) {
            int t = e.top();
            if (t >= w && t < minv) minv = t, idx = j;
            j++;
        }

        if (v.empty() || idx == -1) {
            stack<int> s;
            s.push(w);
            v.push_back(s);
        } else {
            v[idx].push(w);
        }
    }

    cout << v.size() << endl;
    return 0;
}
