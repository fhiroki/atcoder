#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    bool ok = false;
    rep(i, 100 / 4) rep(j, 100 / 7) {
        if (i * 4 + j * 7 == n) ok = true;
    }

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
