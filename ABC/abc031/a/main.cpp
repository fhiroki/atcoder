#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, d;
    cin >> a >> d;

    int ans = max((a + 1) * d, a * (d + 1));

    cout << ans << endl;
    return 0;
}
