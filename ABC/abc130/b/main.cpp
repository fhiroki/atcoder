#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int ans = 1;
    int d = 0;
    rep(i, n) {
        int l;
        cin >> l;
        d += l;
        if (d <= x) ans++;
    }

    cout << ans << endl;
    return 0;
}
