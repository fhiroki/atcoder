#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    double ans = 0;
    rep(i, n) {
        double x;
        string u;
        cin >> x >> u;
        if (u == "JPY") ans += x;
        else ans += x * 380000;
    }

    printf("%.4f\n", ans);
    return 0;
}
