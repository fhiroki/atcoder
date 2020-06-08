#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a, r, n;
    cin >> a >> r >> n;

    ll ans = a * pow(r, n - 1);

    if (ans > 1000000000 || a != ans / pow(r, n - 1))
        cout << "large" << endl;
    else
        cout << ans << endl;
    return 0;
}
