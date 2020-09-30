#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll d = c - a - b;
    if (d > 0 && d * d > 4 * a * b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
