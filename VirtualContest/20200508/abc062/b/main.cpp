#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    rep(i, w + 2) cout << '#';
    cout << endl;
    rep(i, h) {
        cout << '#';
        rep(j, w) {
            char a;
            cin >> a;
            cout << a;
        }
        cout << '#' << endl;
    }
    rep(i, w + 2) cout << '#';
    cout << endl;

    return 0;
}
