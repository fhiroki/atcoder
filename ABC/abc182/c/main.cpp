#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    int ans = n;
    for (int bit = 0; bit < (1 << n); bit++) {
        int cnt = 0;
        int sum = 0;
        rep(i, n) {
            if (bit & (1 << i)) sum += s[i] - '0', cnt++;
        }
        if (sum % 3 == 0) ans = min(ans, n - cnt);
    }

    if (ans == n)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}
