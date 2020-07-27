#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int ans = 0;

    rep(i, 3) {
        int s, e;
        cin >> s >> e;
        ans += s * e * 0.1;
    }

    cout << ans << endl;
    return 0;
}
