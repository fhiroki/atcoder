#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    ll ans = 0;
    for (int i = 1; i * i <= n; i++) ans = i * i;

    cout << ans << endl;
    return 0;
}
