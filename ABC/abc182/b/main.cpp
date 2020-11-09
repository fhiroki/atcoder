#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];

    int cnt = 0;
    int ans = 0;
    for (int i = 2; i <= 1000; i++) {
        int cnt_i = 0;
        rep(j, n) if (a[j] % i == 0) cnt_i++;
        if (cnt < cnt_i) {
            cnt = cnt_i;
            ans = i;
        }
    }

    cout << ans << endl;
    return 0;
}
