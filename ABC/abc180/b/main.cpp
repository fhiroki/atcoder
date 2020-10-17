#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    ll x[n];
    rep(i, n) cin >> x[i];

    ll a = 0, b = 0, c = x[0];
    rep(i, n) {
        a += abs(x[i]);
        b += x[i] * x[i];
        c = max(c, abs(x[i]));
    }

    cout << a << endl;
    printf("%.14f\n", sqrt(b));
    cout << c << endl;
    return 0;
}
