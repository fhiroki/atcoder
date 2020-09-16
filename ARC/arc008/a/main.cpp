#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = n / 10 * 100;
    n %= 10;
    if (n < 7)
        ans += n * 15;
    else
        ans += 100;

    cout << ans << endl;
    return 0;
}
