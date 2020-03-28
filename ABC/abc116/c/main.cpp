#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    rep(i, n) cin >> h[i];

    int ans = 0;
    while (count(h, h+n, 0) < n) {
        int l = 0, r = n;
        rep(i, n) {
            if (h[i] > 0) {
                l = i;
                break;
            }
        }
        for (int i = l; i < n; i++) {
            if (h[i] == 0) {
                r = i;
                break;
            }
        }
        for (int i = l; i < r; i++) h[i]--;
        ans++;
    }

    cout << ans << endl;
    return 0;
}
