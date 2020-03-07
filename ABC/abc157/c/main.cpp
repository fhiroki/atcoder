#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using P = pair<int, int>;

int main() {
    int N, M;
    cin >> N >> M;
    vector<P> p(M);
    rep(i, M) cin >> p[i].first >> p[i].second;
    rep(x, 1000) {
        int nx = x/10;
        vector<int> d(1, x%10);
        while(nx) {
            d.push_back(nx%10);
            nx /= 10;
        }
        if (d.size() != N) continue;
        reverse(d.begin(), d.end());
        bool ok = true;
        rep(i, M) {
            if (d[p[i].first - 1] != p[i].second) ok = false;
        }
        if (ok) {
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
