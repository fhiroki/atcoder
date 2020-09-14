#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << max({a * c, a * d, b * c, b * d}) << endl;
    return 0;
}
