#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int p = count(s.begin(), s.end(), '1');
    int rp = 0, rn = 0;
    for (char c : s) {
        (rp *= 2) %= (p + 1);
        if (p > 1) (rn *= 2) %= (p - 1);
        if (c == '1') {
            (rp += 1) %= (p + 1);
            if (p > 1) (rn += 1) %= (p - 1);
        }
    }

    reverse(s.begin(), s.end());
    vector<int> ans;
    int twop = 1, twon = 1;

    rep(i, n) {
        int r;
        if (s[i] == '0')
            r = (rp + twop) % (p + 1);
        else {
            if (p == 1) {
                ans.push_back(0);
                continue;
            }
            r = (rn - twon + p - 1) % (p - 1);
        }

        int cnt = 1;
        while (r > 0) {
            r %= __builtin_popcount(r);
            cnt++;
        }
        ans.push_back(cnt);

        (twop *= 2) %= (p + 1);
        if (p > 1) (twon *= 2) %= (p - 1);
    }

    reverse(ans.begin(), ans.end());
    for (auto x : ans) cout << x << endl;
    return 0;
}
