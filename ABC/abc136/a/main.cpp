#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int ans = c - (a - b);
    if (ans < 0) ans = 0;

    cout << ans << endl;
    return 0;
}
