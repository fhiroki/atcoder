#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i < 1e6; i++) {
        bool ok = true;
        string s = to_string(i);
        rep(j, s.size()) if (s[0] != s[j]) ok = false;
        if (ok) ans++;
        if (ans == n) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
