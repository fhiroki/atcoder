#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    int p[n];
    rep(i, n) cin >> s[i] >> p[i];

    int sum = 0;
    rep(i, n) sum += p[i];
    string ans = "atcoder";
    rep(i, n) {
        if (p[i] > sum / 2) ans = s[i];
    }

    cout << ans << endl;
    return 0;
}
