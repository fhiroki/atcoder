#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int bit = 0; bit < (1 << 3); bit++) {
        int sum = s[0] - '0';
        char op[3];
        rep(i, 3) {
            if (bit & (1 << i)) {
                sum += s[i + 1] - '0';
                op[i] = '+';
            } else {
                sum -= s[i + 1] - '0';
                op[i] = '-';
            }
        }
        if (sum == 7) {
            rep(i, 3) cout << s[i] << op[i];
            cout << s[3] << "=7" << endl;
            return 0;
        }
    }

    return 0;
}
