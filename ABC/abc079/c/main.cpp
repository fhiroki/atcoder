#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int bit = 0; bit < (1 << 3); bit++) {
        char ops[3] = {'+', '+', '+'};
        rep(i, 3) if (bit & (1 << i)) ops[i] = '-';
        int sum = s[0] - '0';
        rep(i, 3) {
            if (ops[i] == '+')
                sum += s[i + 1] - '0';
            else
                sum -= s[i + 1] - '0';
        }
        if (sum == 7) {
            cout << s[0];
            rep(i, 3) cout << ops[i] << s[i + 1];
            cout << "=7" << endl;
            return 0;
        }
    }

    return 0;
}
