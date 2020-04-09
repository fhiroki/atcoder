#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    int a[4];
    rep(i, 4) a[i] = s[i] - '0';

    for (int i = 0; i < (1 << 3); i++) {
        char op[3];
        int ans = a[0];
        rep(j, 3) {
            if (i & (1 << j)) {
                ans += a[j + 1];
                op[j] = '+';
            } else {
                ans -= a[j + 1];
                op[j] = '-';
            }
        }
        if (ans == 7) {
            cout << a[0];
            rep(i, 3) { cout << op[i] << a[i + 1]; }
            cout << "=7" << endl;
            return 0;
        }
    }
}
