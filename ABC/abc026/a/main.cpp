#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a;
    cin >> a;

    int ans = 0;
    for (int x = 1; x < 101; x++) {
        for (int y = 1; y < 101; y++) {
            if (x + y == a) ans = max(ans, x * y);
        }
    }

    cout << ans << endl;
    return 0;
}
