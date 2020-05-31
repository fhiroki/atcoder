#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int p, q, r;
    cin >> p >> q >> r;

    int ans = p + q + r - max({p, q, r});

    cout << ans << endl;
    return 0;
}
