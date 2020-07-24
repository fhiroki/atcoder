#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != a[n - 1]) {
            cout << a[i] << endl;
            return 0;
        }
    }
    return 0;
}
