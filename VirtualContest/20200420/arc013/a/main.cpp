#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m, l, p, q, r;
    cin >> n >> m >> l >> p >> q >> r;

    int a = (n / p) * (m / q) * (l / r);
    int b = (n / p) * (m / r) * (l / q);
    int c = (n / q) * (m / p) * (l / r);
    int d = (n / q) * (m / r) * (l / p);
    int e = (n / r) * (m / p) * (l / q);
    int f = (n / r) * (m / q) * (l / p);
    cout << max({a, b, c, d, e, f}) << endl;
    return 0;
}
