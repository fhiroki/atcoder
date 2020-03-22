#include <bits/stdc++.h>
#define rep(i, n) for (double i = 0; i <= n; i+=1.0/3)
typedef long long ll;
using namespace std;

int main() {
    int l;
    cin >> l;

    double ans = 0;
    rep(i, 1000) rep(j, 1000) {
        double k = l - i - j;
        if (i + j + k == l && k > 0) {
            ans = max(ans, i*j*k);
        }
    }

    printf("%.12f\n", ans);
    return 0;
}
