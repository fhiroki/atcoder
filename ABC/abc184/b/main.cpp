#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, x;
    string s;
    cin >> n >> x >> s;

    int ans = x;
    rep(i, n) {
        if (s[i] == 'o')
            ans++;
        else if (ans > 0)
            ans--;
    }

    cout << ans << endl;
    return 0;
}
