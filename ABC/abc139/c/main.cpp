#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll = long long;
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    rep(i, n) cin >> h[i];

    int ans = 0;
    int maxv = 0;

    rep(i, n - 1) {
        if (h[i] >= h[i+1]) {
            ans++;
        } else {
            maxv = max(ans, maxv);
            ans = 0;
        }
    }
    maxv = max(ans, maxv);

    cout << maxv << endl;
    return 0;
}
