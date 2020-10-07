#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, h, w;
    cin >> n >> h >> w;

    int ans = 0;
    rep(i, n) {
        int a, b;
        cin >> a >> b;
        if (a >= h && b >= w) ans++;
    }

    cout << ans << endl;
    return 0;
}
