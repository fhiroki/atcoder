#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], d[m + 1];
    rep(i, n) a[i] = i + 1;
    for (int i = 1; i <= m; i++) cin >> d[i];
    d[0] = 0;

    rep(i, m) {
        int idx = distance(a, find(a, a + n, d[i + 1]));
        a[idx] = d[i];
    }

    rep(i, n) cout << a[i] << endl;
    return 0;
}
