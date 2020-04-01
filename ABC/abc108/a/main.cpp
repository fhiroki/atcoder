#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int k;
    cin >> k;

    int ans = 0;
    if (k % 2 == 0)
        ans = k / 2 * k / 2;
    else
        ans = k / 2 * (k - k / 2);

    cout << ans << endl;
    return 0;
}
