#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> mp;
    ll ans = 0;

    rep(i, n) {
        int a;
        cin >> a;
        ans += mp[i - a];
        mp[i + a]++;
    }

    cout << ans << endl;
    return 0;
}
