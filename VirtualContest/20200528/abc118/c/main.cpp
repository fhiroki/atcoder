#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans;
    cin >> ans;
    rep(i, n - 1) {
        int a;
        cin >> a;
        ans = __gcd(ans, a);
    }

    cout << ans << endl;
    return 0;
}
