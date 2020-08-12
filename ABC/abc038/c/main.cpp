#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

ll c[100005];

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    for (int i = 1; i < 100005; i++) c[i] += i + c[i - 1];

    ll ans = 0, cnt = 1;
    rep(i, n - 1) {
        if (a[i] < a[i + 1])
            cnt++;
        else {
            ans += c[cnt];
            cnt = 1;
        }
    }
    ans += c[cnt];

    cout << ans << endl;
    return 0;
}
