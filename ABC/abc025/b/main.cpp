#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    rep(i, n) {
        string s;
        int d;
        cin >> s >> d;
        if (d < a)
            d = a;
        else if (d > b)
            d = b;
        if (s == "West") d *= -1;
        ans += d;
    }

    if (ans == 0)
        cout << 0 << endl;
    else if (ans < 0)
        cout << "West " << abs(ans) << endl;
    else
        cout << "East " << ans << endl;
    return 0;
}
