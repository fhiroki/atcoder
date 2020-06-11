#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    int ans = 0;
    for (ll i = 2; i * i <= n; i++) {
        int cnt = 0;
        while (n % i == 0) n /= i, cnt++;
        for (int j = 1; j <= cnt; j++) cnt -= j, ans++;
    }

    if (n != 1) ans++;
    cout << ans << endl;
    return 0;
}
