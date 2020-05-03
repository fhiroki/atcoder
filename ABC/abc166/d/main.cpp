#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll x;
    cin >> x;

    for (int a = -1000; a < 1000; a++) {
        for (int b = -1000; b < 1000; b++) {
            if (pow(a, 5) - pow(b, 5) == x) {
                cout << a << ' ' << b << endl;
                return 0;
            }
        }
    }

    return 0;
}
