#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double n, x, t;
    cin >> n >> x >> t;

    int ans = ceil(n / x) * t;

    cout << ans << endl;
    return 0;
}
