#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int a[200005];

int main() {
    int n, q;
    cin >> n >> q;

    rep(i, q) {
        int l, r;
        cin >> l >> r;
        a[l - 1]++;
        a[r]--;
    }
    for (int i = 1; i < n; i++) a[i] += a[i - 1];

    rep(i, n) cout << a[i] % 2;
    cout << endl;

    return 0;
}
