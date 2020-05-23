#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int g;
    cin >> g;
    rep(i, n) {
        int a;
        cin >> a;
        g = __gcd(g, a);
    }

    int ans = 0;
    while (g > 1) ans++, g /= 2;

    cout << ans << endl;
    return 0;
}
