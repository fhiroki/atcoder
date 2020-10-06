#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    rep(i, k) {
        if (i % 2 == 0) {
            a /= 2;
            b += a;
        } else {
            b /= 2;
            a += b;
        }
    }

    cout << a << ' ' << b << endl;
    return 0;
}
