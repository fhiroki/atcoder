#include <bits/stdc++.h>

#include <atcoder/all>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

using namespace std;
using namespace atcoder;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b < c || a > d)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}
