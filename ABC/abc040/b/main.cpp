#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 1e9;
    int a = sqrt(n);
    for (int i = a - 100; i < a + 100; i++) {
        if (i <= 0) continue;
        for (int j = a - 100; j < a + 100; j++) {
            if (j <= 0) continue;
            if (n / (i * j) != 1) continue;
            ans = min(ans, n % (i * j) + abs(i - j));
        }
    }

    cout << ans << endl;
    return 0;
}
