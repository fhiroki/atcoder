#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    rep(i, n) cin >> a[i];

    rep(j, k) {
        vector<int> b(n, 0);
        rep(i, n) {
            int l = max(0, i - a[i]);
            int r = min(n - 1, i + a[i]);
            b[l]++;
            if (r + 1 < n) b[r + 1]--;
        }
        for (int i = 1; i < n; i++) b[i] += b[i - 1];

        if (a == b) break;
        a = b;
    }

    rep(i, n) {
        cout << a[i];
        if (i == n - 1)
            cout << endl;
        else
            cout << ' ';
    }

    return 0;
}
