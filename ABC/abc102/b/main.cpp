#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];

    int ans = 0;
    rep(i, n - 1) {
        for (int j = i + 1; j < n; j++) {
            ans = max(ans, abs(a[i] - a[j]));
        }
    }

    cout << ans << endl;
    return 0;
}
