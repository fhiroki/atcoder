#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, t, a;
    cin >> n >> t >> a;

    double minv = 1e9;
    int ans = 0;
    rep(i, n) {
        int h;
        cin >> h;
        double tmp = abs(a - (t - h * 0.006));
        if (tmp < minv) {
            ans = i + 1;
            minv = tmp;
        }
    }

    cout << ans << endl;
    return 0;
}
