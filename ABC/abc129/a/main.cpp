#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int p, q, r;
    cin >> p >> q >> r;

    if (p >= q && p >= r) cout << q + r << endl;
    else if (q >= p && q >= r) cout << p + r << endl;
    else if (r >= q && r >= q) cout << p + q << endl;

    return 0;
}
