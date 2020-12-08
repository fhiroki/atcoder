#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;
    vector<int> l(L), r(R);
    rep(i, L) cin >> l[i];
    rep(i, R) cin >> r[i];

    int ans = 0;
    rep(i, l.size()) {
        rep(j, r.size()) {
            if (l[i] == r[j]) {
                ans++;
                r.erase(r.begin() + j);
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
