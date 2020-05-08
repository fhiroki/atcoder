#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        int sum = 0;
        rep(j, s.size()) sum += s[j] - '0';
        if (sum >= a && sum <= b) ans += i;
    }

    cout << ans << endl;
    return 0;
}
