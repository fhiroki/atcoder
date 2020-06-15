#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    vector<int> p(102, 0);
    rep(i, n) {
        int x;
        cin >> x;
        p[x] = 1;
    }

    int ans = 0;
    int minError = 1000;
    rep(i, 102) {
        if (p[i] == 1) continue;

        int e = abs(i - x);
        if (e < minError) {
            ans = i;
            minError = e;
        }
    }

    cout << ans << endl;
    return 0;
}
