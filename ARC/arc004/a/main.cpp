#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    int x[N], y[N];
    rep(i, N) cin >> x[i] >> y[i];

    float ans = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            float len = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
            ans = max(ans, len);
        }
    }

    cout << ans << endl;
    return 0;
}
