#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int r[n];
    rep(i, n) cin >> r[i];
    sort(r, r + n);

    double ans = 0;
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        int area = r[i] * r[i];
        ans += (cnt % 2 == 0) ? area : -area;
        cnt++;
    }

    printf("%.10f\n", ans * M_PI);
    return 0;
}
