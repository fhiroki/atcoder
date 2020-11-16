#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int t[n][n];
    rep(i, n) rep(j, n) cin >> t[i][j];

    int ans = 0;

    vector<int> v;
    rep(i, n - 1) v.push_back(i + 1);
    do {
        ll cost = 0;
        int s = 0;
        rep(i, n - 1) {
            cost += t[s][v[i]];
            s = v[i];
        }
        cost += t[s][0];
        if (cost == k) ans++;
    } while (next_permutation(v.begin(), v.end()));

    cout << ans << endl;
    return 0;
}
