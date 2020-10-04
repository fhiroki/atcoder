#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int e[6], l[6], b;
    rep(i, 6) cin >> e[i];
    cin >> b;
    rep(i, 6) cin >> l[i];

    int cnt = 0;
    rep(i, 6) rep(j, 6) if (e[i] == l[j]) cnt++;

    int ans = 0;
    if (cnt == 6)
        ans = 1;
    else if (cnt == 5 && find(l, l + 6, b) != l + 6)
        ans = 2;
    else if (cnt == 5)
        ans = 3;
    else if (cnt == 4)
        ans = 4;
    else if (cnt == 3)
        ans = 5;

    cout << ans << endl;
    return 0;
}
