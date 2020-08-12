#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    ll ans = 0;
    for (int bit = 0; bit < (1 << n - 1); bit++) {
        ll a = s[0] - '0', sum = 0;
        for (int i = 1; i < n; i++) {
            if (bit & (1 << i - 1))
                a = a * 10 + s[i] - '0';
            else
                sum += a, a = s[i] - '0';
        }
        sum += a;
        ans += sum;
    }

    cout << ans << endl;
    return 0;
}
