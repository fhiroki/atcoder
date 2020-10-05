#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int const MAX = 3505;

int main() {
    ll N;
    cin >> N;

    for (ll h = 1; h < MAX; h++) {
        for (ll n = 1; n < MAX; n++) {
            double t = 4 * h * n - N * n - N * h;
            if (t <= 0) continue;

            double w = (N * h * n) / t;
            if (w == floor(w)) {
                printf("%d %d %d\n", (int)h, (int)n, (int)w);
                return 0;
            }
        }
    }

    return 0;
}
