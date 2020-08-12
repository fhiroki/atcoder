#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int cnt[100005];

int main() {
    int n, k;
    cin >> n >> k;

    rep(i, n - k + 1) {
        cnt[i]++;
        cnt[i + k]--;
    }
    for (int i = 1; i < n; i++) cnt[i] += cnt[i - 1];

    ll ans = 0;
    rep(i, n) {
        ll a;
        cin >> a;
        ans += a * cnt[i];
    }

    cout << ans << endl;
    return 0;
}
