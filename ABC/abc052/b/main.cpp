#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    int x = 0;
    rep(i, n) {
        if (s[i] == 'I')
            x++;
        else
            x--;
        ans = max(ans, x);
    }

    cout << ans << endl;
    return 0;
}
