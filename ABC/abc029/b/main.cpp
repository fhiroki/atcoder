#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int ans = 0;

    rep(i, 12) {
        string s;
        cin >> s;
        if (find(s.begin(), s.end(), 'r') != s.end()) ans++;
    }

    cout << ans << endl;
    return 0;
}
