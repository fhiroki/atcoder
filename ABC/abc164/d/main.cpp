#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

ll cnt[2019];

int main() {
    string s;
    cin >> s;

    int now = 0;
    ll ans = 0, p = 1;
    cnt[0] = 1;

    for (int i = s.size() - 1; i >= 0; i--) {
        now = (now + (s[i] - '0') * p) % 2019;
        ans += cnt[now]++;
        p = p * 10 % 2019;
    }

    cout << ans << endl;
    return 0;
}
