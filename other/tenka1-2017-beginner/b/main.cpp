#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    P v[n];
    rep(i, n) cin >> v[i].first >> v[i].second;
    sort(v, v + n);

    int ans = v[0].first + v[n - 1].second;
    rep(i, n - 1) ans += v[i + 1].first - v[i].first;

    cout << ans << endl;
    return 0;
}
