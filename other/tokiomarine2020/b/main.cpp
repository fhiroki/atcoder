#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a, v, b, w, t;
    cin >> a >> v >> b >> w >> t;

    if (abs(b - a) <= t * v - t * w)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
