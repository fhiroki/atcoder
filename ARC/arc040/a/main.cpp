#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int r = 0, b = 0;
    rep(i, n) rep(j, n) {
        char c;
        cin >> c;
        if (c == 'R')
            r++;
        else if (c == 'B')
            b++;
    }

    if (r == b)
        cout << "DRAW" << endl;
    else if (r > b)
        cout << "TAKAHASHI" << endl;
    else
        cout << "AOKI" << endl;
    return 0;
}
