#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = 0;
    rep(i, n) {
        int x;
        cin >> x;
        ans += min(x, k - x) * 2;
    }

    cout << ans << endl;
    return 0;
}
