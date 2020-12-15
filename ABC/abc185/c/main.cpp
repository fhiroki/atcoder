#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int l;
    cin >> l;

    ll ans = 1;
    for (int i = 1; i < 12; i++) ans = ans * (l - i) / i;

    cout << ans << endl;
    return 0;
}
