#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll x;
    cin >> x;

    ll cnt = 0;
    ll ans = 100;
    while (ans < x) {
        ans *= 1.01;
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}
