#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    while (n > 0) {
        if (n / 10 > 0 || n % 10 >= 7)
            ans += 100, n -= 10;
        else
            ans += (n % 10) * 15, n -= n % 10;
    }

    cout << ans << endl;
    return 0;
}
