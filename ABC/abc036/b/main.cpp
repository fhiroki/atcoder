#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    char s[n][n];
    rep(i, n) rep(j, n) cin >> s[i][j];

    rep(i, n) {
        for (int j = n - 1; j >= 0; j--) {
            cout << s[j][i];
        }
        cout << endl;
    }

    return 0;
}
