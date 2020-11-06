#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    for (int a = 1; a < 38; a++) {
        for (int b = 1; b < 26; b++) {
            ll sum_a = 1;
            ll sum_b = 1;
            rep(i, a) sum_a *= 3;
            rep(i, b) sum_b *= 5;
            if (n == sum_a + sum_b) {
                cout << a << ' ' << b << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
    return 0;
}
