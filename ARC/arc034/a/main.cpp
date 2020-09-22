#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    double ans = 0;
    rep(i, n) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        double score = (a + b + c + d + e * 110.0 / 900.0);
        ans = max(ans, score);
    }

    printf("%.10f\n", ans);
    return 0;
}
