#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    int d[n];
    rep(i, n) d[i] = a[i] - b[i];
    sort(d, d + n);

    int l = 0, r = n - 1;
    while (d[l] < 0) {
        if (d[r] < 0) {
            cout << -1 << endl;
            return 0;
        } else if (d[r] >= abs(d[l])) {
            d[r] += d[l];
            d[l] = 0;
            l++;
        } else {
            d[l] += d[r];
            d[r] = 0;
        }
        if (d[r] == 0) r--;
    }

    if (l == 0)
        cout << 0 << endl;
    else
        cout << (l + 1) + (n - 1) - r << endl;
    return 0;
}
