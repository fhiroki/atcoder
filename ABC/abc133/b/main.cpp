#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int x[n][d];
    rep(i, n) rep(j, d) cin >> x[i][j];

    int ans = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            float dist = 0;
            rep(k, d) dist += pow(x[i][k] - x[j][k], 2);
            dist = sqrt(dist);
            if (floor(dist) == dist) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
