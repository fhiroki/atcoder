#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, X, Y;
    cin >> n >> X >> Y;
    X += 201;
    Y += 201;
    const int INF = 1e8;
    vector<vector<int>> dp(403, vector<int>(403, INF));

    rep(i, n) {
        int x, y;
        cin >> x >> y;
        x += 201;
        y += 201;
        dp[x][y] = -1;
    }

    queue<pair<int, int>> q;
    q.push({201, 201});
    dp[201][201] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                if ((i == 0 && j == 0) || (i == -1 && j == -1) ||
                    (i == 1 && j == -1))
                    continue;
                int dx = x + i;
                int dy = y + j;
                if (dx < 0 || dx > 402 || dy < 0 || dy > 402) continue;
                if (dp[dx][dy] == -1) continue;
                if (dp[dx][dy] <= dp[x][y] + 1) continue;
                dp[dx][dy] = dp[x][y] + 1;
                q.push({dx, dy});
            }
        }
    }

    if (dp[X][Y] == INF)
        cout << -1 << endl;
    else
        cout << dp[X][Y] << endl;

    return 0;
}
