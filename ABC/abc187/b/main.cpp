#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    rep(i, n) cin >> x[i] >> y[i];

    int ans = 0;
    rep(i, n - 1) {
        for (int j = i + 1; j < n; j++) {
            if (x[i] == x[j] || y[i] == y[j])
                ans++;
            else {
                double dy = y[i] - y[j];
                double dx = x[i] - x[j];
                double a = dy / dx;
                if (a >= -1 && a <= 1) ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
