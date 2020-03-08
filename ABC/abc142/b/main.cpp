#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = 0;
    rep(i, n) {
        int h;
        cin >> h;
        if (h >= k) ans++;
    }

    cout << ans << endl;
    return 0;
}
