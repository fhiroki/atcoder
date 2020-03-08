#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
    int five = 0, seven = 0;
    rep(i, 3) {
        int a;
        cin >> a;
        if (a == 5) five++;
        if (a == 7) seven++;
    }

    bool ok = false;
    if (five == 2 && seven == 1) ok = true;

    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
