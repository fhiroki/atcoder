#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;
    string s;
    cin >> s;

    int last = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '.') {
            last = i;
            break;
        }
    }

    if (last == -1) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    rep(i, n) {
        if (s[i] == '.') {
            rep(j, r) s[i + j] = 'o';
            ans++;
        } else if (i + r > last) {
            rep(j, r) s[i + j] = 'o';
            ans++;
        }
        if (all_of(s.begin(), s.end(), [](char c) { return c == 'o'; })) break;
        ans++;
    }

    cout << ans << endl;
    return 0;
}
