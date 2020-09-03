#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

ll dp[105][100005];

int main() {
    int N, W;
    cin >> N >> W;
    int w[N], v[N];
    rep(i, N) cin >> w[i] >> v[i];

    rep(i, N) {
        rep(sum_w, W + 1) {
            if (sum_w - w[i] >= 0) {
                dp[i + 1][sum_w] =
                    max(dp[i + 1][sum_w], dp[i][sum_w - w[i]] + v[i]);
            }
            dp[i + 1][sum_w] = max(dp[i + 1][sum_w], dp[i][sum_w]);
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}
