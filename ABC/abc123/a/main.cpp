#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a[5], k;
    rep(i, 5) cin >> a[i];
    cin >> k;

    bool ok = true;
    rep(i, 4) {
        for (int j = i+1; j < 5; j++) {
            if (abs(a[i] - a[j]) > k) ok = false;
        }
    }

    if (ok) cout << "Yay!" << endl;
    else cout << ":(" << endl;
    return 0;
}
