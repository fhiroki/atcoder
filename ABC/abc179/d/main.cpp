#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
int const MOD = 998244353;

int dp[300000];

void addMod(int x, int y) {
    dp[x] += dp[y];
    dp[x] %= MOD;
}

void subMod(int x, int y) {
    dp[x] -= dp[y];
    dp[x] = (dp[x] + MOD) % MOD;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> lr;
    rep(i, k) {
        int l, r;
        cin >> l >> r;
        lr.push_back({l, r + 1});
    }

    dp[0] = 1;
    dp[1] = -1;
    rep(i, n) {
        if (i > 0) addMod(i, i - 1);
        rep(j, k) {
            int l, r;
            tie(l, r) = lr[j];
            if (i + l < n) addMod(i + l, i);
            if (i + r < n) subMod(i + r, i);
        }
    }

    cout << dp[n - 1] << endl;
    return 0;
}
