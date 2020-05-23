#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int ans = 0;
    rep(i, 3) {
        char s;
        cin >> s;
        if (s == '1') ans++;
    }

    cout << ans << endl;
    return 0;
}
