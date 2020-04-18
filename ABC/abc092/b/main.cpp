#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, d, x;
    cin >> n >> d >> x;

    int ans = 0;
    rep(i, n) {
        int a;
        cin >> a;
        ans += d / a;
        if (d % a != 0) ans++;
    }

    cout << ans + x << endl;
    return 0;
}
