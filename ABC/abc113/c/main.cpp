#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
using P = pair<int, int>;

string getId(int n) {
    ostringstream id;
    id << setw(6) << setfill('0') << right << n;
    return id.str();
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<P>> a(n);

    rep(i, m) {
        int p, y;
        cin >> p >> y;
        p--;
        a[p].push_back(make_pair(y, i));
    }

    string ans[m];
    rep(i, a.size()) {
        sort(a[i].begin(), a[i].end());
        for (int j = 0; j < a[i].size(); j++) {
            ans[a[i][j].second] = getId(i + 1) + getId(j + 1);
        }
    }

    rep(i, m) cout << ans[i] << endl;
    return 0;
}
