#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int ng[3];
    rep(i, 3) cin >> ng[i];

    if (n == ng[0] || n == ng[1] || n == ng[2]) {
        cout << "NO" << endl;
        return 0;
    }

    int cnt = 0;
    while (n != 0) {
        int pn = n;
        for (int i = 3; i >= 1; i--) {
            bool ok = true;
            rep(j, 3) if (n - i == ng[j]) ok = false;
            if (ok && n - i >= 0) {
                n -= i;
                cnt++;
                break;
            }
        }
        if (n == pn) {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (cnt <= 100)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
