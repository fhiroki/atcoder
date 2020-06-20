#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int a[4];
    rep(i, 4) a[i] = s[i] - '0';

    for (int bit = 0; bit < (1 << 3); bit++) {
        vector<char> ops(3, '+');
        int sum = a[0];

        rep(i, 3) {
            if (bit & (1 << i)) {
                ops[i] = '-';
                sum -= a[i + 1];
            } else
                sum += a[i + 1];
        }

        if (sum == 7) {
            rep(i, 3) cout << a[i] << ops[i];
            cout << a[3] << "=7" << endl;
            return 0;
        }
    }

    return 0;
}
