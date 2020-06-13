#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll h, n;
    cin >> h >> n;

    rep(i, n) {
        int a;
        cin >> a;
        h -= a;
    }

    if (h <= 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
