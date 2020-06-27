#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int k[n];
    rep(i, n) cin >> k[i];

    cout << k[0] << ' ';
    rep(i, n - 2) cout << min(k[i], k[i + 1]) << ' ';
    cout << k[n - 2] << endl;
    return 0;
}
