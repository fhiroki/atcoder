#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int w[n];
    rep(i, n) cin >> w[i];

    int ans = 10000;
    rep(i, n) {
        int l = 0, r = 0;
        for (int j = 0; j <= i; j++) l += w[j];
        for (int j = i+1; j < n; j++) r += w[j];
        ans = min(ans, abs(l - r));
    }

    cout << ans << endl;
    return 0;
}
