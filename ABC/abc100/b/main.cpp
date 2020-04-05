#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int d, n;
    cin >> d >> n;

    ll ans = n * pow(100, d);
    if (n == 100) ans += pow(100, d);

    cout << ans << endl;
    return 0;
}
