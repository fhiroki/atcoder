#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    rep(i, h) {
        if (i == 0) rep(k, w + 2) cout << '#';
        cout << endl;
        rep(j, w) {
            if (j == 0) cout << '#';
            char a;
            cin >> a;
            cout << a;
            if (j == w - 1) cout << '#';
        }
    }

    cout << endl;
    rep(k, w + 2) cout << '#';
    cout << endl;
    return 0;
}
