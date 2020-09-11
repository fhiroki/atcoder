#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    rep(i, n) a[i] = i + 1;

    int p = 0;
    rep(i, m) {
        int d;
        cin >> d;
        a[find(a, a + n, d) - a] = p;
        p = d;
    }

    rep(i, n) cout << a[i] << endl;
    return 0;
}
