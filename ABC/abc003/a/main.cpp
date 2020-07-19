#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    double ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += i * 10000.0 / n;
    }

    cout << ans << endl;
    return 0;
}
