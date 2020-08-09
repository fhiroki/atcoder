#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];

    int ans = -1e9;
    rep(i, n) {
        int maxT = -1e9, maxA = -1e9;
        rep(j, n) {
            if (i == j) continue;
            int l = min(i, j);
            int r = max(i, j);
            int sumT = 0, sumA = 0;
            for (int k = l; k <= r; k++) {
                if ((k - l) % 2 == 0)
                    sumT += a[k];
                else
                    sumA += a[k];
            }
            if (sumA > maxA) maxA = sumA, maxT = sumT;
        }
        ans = max(ans, maxT);
    }

    cout << ans << endl;
    return 0;
}
