#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    rep(i, n) {
        int m;
        cin >> m;
        ans += max(80 - m, 0);
    }

    cout << ans << endl;
    return 0;
}
