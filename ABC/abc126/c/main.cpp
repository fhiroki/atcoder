#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    double ans = 0;
    for (int i = 1; i <= n; i++) {
        double a = 0, s = i;
        while (s < k) {
            s *= 2;
            a++;
        }
        ans += 1/(n * pow(2, a));
    }

    printf("%.12f\n", ans);
    return 0;
}
