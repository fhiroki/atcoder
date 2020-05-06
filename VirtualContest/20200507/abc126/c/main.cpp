#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    double ans = 0;
    for (int i = 1; i <= n; i++) {
        double now = i;
        int cnt = 0;
        while (now < k) {
            now *= 2;
            cnt++;
        }
        ans += 1 / pow(2.0, cnt);
    }

    printf("%.12f\n", ans / n);
    return 0;
}
