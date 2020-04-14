#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n + 1];
    rep(i, n) cin >> p[i];
    p[n] = 0;

    int ans = 0;
    rep(i, n) {
        if (p[i] == i + 1) {
            if (p[i + 1] == i + 2) i++;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
