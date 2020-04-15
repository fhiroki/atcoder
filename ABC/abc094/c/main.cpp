#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    rep(i, n) cin >> x[i];
    copy(x, x + n, y);
    sort(x, x + n);

    int l = x[n / 2 - 1];
    int r = x[n / 2];
    rep(i, n) {
        if (y[i] <= l)
            cout << r << endl;
        else
            cout << l << endl;
    }

    return 0;
}
