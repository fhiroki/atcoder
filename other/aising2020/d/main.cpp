#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int f(int x) {
    if (x == 0) return 0;
    return f(x % __builtin_popcount(x)) + 1;
}

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> x(n);
    rep(i, n) x[i] = s[i] - '0';

    int p = 0;
    vector<int> ans(n);
    rep(i, n) p += x[i];

    rep(b, 2) {
        int np = p;
        b == 0 ? np++ : np--;
        if (np <= 0) continue;

        int r0 = 0;
        rep(i, n) {
            r0 = (r0 * 2) % np;
            r0 += x[i];
        }

        int k = 1;
        for (int i = n - 1; i >= 0; i--) {
            if (x[i] == b) {
                int r = r0;
                if (b == 0)
                    r = (r + k) % np;
                else
                    r = (r - k + np) % np;
                ans[i] = f(r) + 1;
            }
            k = (k * 2) % np;
        }
    }

    rep(i, n) cout << ans[i] << endl;
    return 0;
}
