#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    rep(i, n) {
        ll x;
        cin >> x;
        a[i] = x;
        sum ^= x;
    }

    rep(i, n) {
        cout << (sum ^ a[i]);

        if (i == n - 1)
            cout << endl;
        else
            cout << ' ';
    }

    return 0;
}
