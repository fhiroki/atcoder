#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 0;
    if (a >= 13) ans = b;
    else if (a >= 6) ans = b/2;

    cout << ans << endl;
    return 0;
}
