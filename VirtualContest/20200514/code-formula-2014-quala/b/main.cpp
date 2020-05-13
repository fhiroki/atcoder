#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    char p[10];
    rep(i, 10) p[i] = 'x';

    rep(i, a) {
        int q;
        cin >> q;
        q == 0 ? q = 9 : q--;
        p[q] = '.';
    }

    rep(i, b) {
        int q;
        cin >> q;
        q == 0 ? q = 9 : q--;
        p[q] = 'o';
    }

    for (int i = 6; i < 10; i++) {
        cout << p[i];
        if (i != 9) cout << ' ';
    }
    cout << endl << ' ';

    for (int i = 3; i < 6; i++) {
        cout << p[i];
        if (i != 5) cout << ' ';
    }
    cout << endl;

    cout << "  " << p[1] << ' ' << p[2] << endl;
    cout << "   " << p[0] << endl;

    return 0;
}
