#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];

    ll money = 1000;
    rep(i, n - 1) {
        if (a[i] < a[i + 1]) {
            money += money / a[i] * (a[i + 1] - a[i]);
        }
    }

    cout << money << endl;
    return 0;
}
