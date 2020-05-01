#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

ll d[5];
int p[10] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 2};
int q[10] = {1, 1, 1, 2, 2, 3, 2, 2, 3, 3};
int r[10] = {2, 3, 4, 3, 4, 4, 3, 4, 4, 4};

int main() {
    int n;
    cin >> n;

    rep(i, n) {
        string s;
        cin >> s;
        if (s[0] == 'M') d[0]++;
        if (s[0] == 'A') d[1]++;
        if (s[0] == 'R') d[2]++;
        if (s[0] == 'C') d[3]++;
        if (s[0] == 'H') d[4]++;
    }

    ll ans = 0;
    rep(i, 10) ans += d[p[i]] * d[q[i]] * d[r[i]];

    cout << ans << endl;
    return 0;
}
