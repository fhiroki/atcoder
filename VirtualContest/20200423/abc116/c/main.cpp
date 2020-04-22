#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    rep(i, n) cin >> h[i];

    int ans = 0;
    while (!all_of(h, h + n, [](int x) { return x == 0; })) {
        bool find = false;
        rep(i, n) {
            if (h[i] != 0)
                h[i]--, find = true;
            else if (find)
                break;
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}
