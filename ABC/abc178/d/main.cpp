#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
int const MOD = 1e9 + 7;

ll dp[2005];

int main() {
    int s;
    cin >> s;

    dp[0] = 1;
    for (int i = 3; i <= s; i++) {
        dp[i] = (dp[i - 1] + dp[i - 3]) % MOD;
    }

    cout << dp[s] << endl;
    return 0;
}
