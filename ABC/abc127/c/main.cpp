#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int start = 0, end = 1e5+1;
    rep(i, m) {
        int l, r;
        cin >> l >> r;
        start = max(start, l);
        end = min(end, r);
    }

    int ans = max(end - start + 1, 0);

    cout << ans << endl;
    return 0;
}
