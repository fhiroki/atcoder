#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    int b[n];
    rep(i, n) cin >> b[i];

    int ans = b[0] + b[n - 2];
    for (int i = 0; i < n - 2; i++) {
        ans += min(b[i], b[i+1]);
    }

    cout << ans << endl;
    return 0;
}
