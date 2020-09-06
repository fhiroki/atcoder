#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int const MAX = 10010;
int dp[MAX];

int main() {
    int n, p;
    cin >> n;

    dp[0] = 1;
    rep(i, n) {
        cin >> p;
        for (int j = MAX; j >= 0; j--) {
            if (dp[j]) dp[j + p] = 1;
        }
    }

    int ans = count(dp, dp + MAX, 1);

    cout << ans << endl;
    return 0;
}
