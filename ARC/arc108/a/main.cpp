#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll s, p;
    cin >> s >> p;

    for (ll n = 1; n * n <= 1e12; n++) {
        if (n * (s - n) == p) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
