#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[5];
    rep(i, 5) cin >> s[i];

    for (int j = 0; j < n; j++) {
        bool l = true, c = true, r = true;
        rep(i, 5) if (s[i][4 * j + 1] == '.') l = false;
        rep(i, 5) if (s[i][4 * j + 2] == '.') c = false;
        rep(i, 5) if (s[i][4 * j + 3] == '.') r = false;

        int num;
        if (l) {
            if (s[2][4 * j + 2] == '.')
                num = 0;
            else if (s[1][4 * j + 3] == '.')
                num = 6;
            else
                num = 8;
        } else if (r) {
            if (s[0][4 * j + 2] == '.')
                num = 4;
            else if (s[4][4 * j + 2] == '.')
                num = 7;
            else if (s[1][4 * j + 1] == '.')
                num = 3;
            else
                num = 9;
        } else if (c) {
            num = 1;
        } else {
            if (s[1][4 * j + 1] == '.')
                num = 2;
            else
                num = 5;
        }

        cout << num;
    }

    cout << endl;
    return 0;
}
