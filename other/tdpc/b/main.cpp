#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int dp[1005][1005];

int main() {
    int A, B;
    cin >> A >> B;
    int a[A], b[B];
    int sum = 0;
    rep(i, A) cin >> a[i], sum += a[i];
    rep(i, B) cin >> b[i], sum += b[i];

    for (int i = A; i >= 0; i--) {
        for (int j = B; j >= 0; j--) {
            if (i < A || j < B) dp[i][j] = -1e9;
            if (i < A) dp[i][j] = max(dp[i][j], a[i] - dp[i + 1][j]);
            if (j < B) dp[i][j] = max(dp[i][j], b[j] - dp[i][j + 1]);
        }
    }

    cout << (sum + dp[0][0]) / 2 << endl;
    return 0;
}
