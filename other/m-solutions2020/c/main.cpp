#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    ll a[n];
    rep(i, n) cin >> a[i];

    for (int i = 0; i < n - k; i++) {
        if (a[i] < a[i + k])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
