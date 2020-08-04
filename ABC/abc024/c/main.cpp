#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, d, k;
    cin >> n >> d >> k;
    int l[d], r[d], s[k], t[k];
    rep(i, d) cin >> l[i] >> r[i];
    rep(i, k) cin >> s[i] >> t[i];

    rep(i, k) {
        int now = s[i];
        rep(j, d) {
            if (s[i] < t[i]) {
                if (l[j] <= now) now = max(now, r[j]);
                if (now >= t[i]) {
                    cout << j + 1 << endl;
                    break;
                }
            } else {
                if (r[j] >= now) now = min(now, l[j]);
                if (now <= t[i]) {
                    cout << j + 1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
