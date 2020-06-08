#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    rep(i, n) cin >> s[i];

    bool ok = true;
    string S = s[n / 2];
    rep(i, n / 2) {
        string s1 = s[i];
        string s2 = s[n - i - 1];
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        bool same = false;
        rep(j, n) {
            rep(k, n) {
                if (s1[j] == s2[k]) {
                    same = true;
                    S[i] = s1[j];
                    S[n - i - 1] = s1[j];
                    break;
                }
            }
            if (same) break;
        }
        if (!same) ok = false;
    }

    if (ok)
        cout << S << endl;
    else
        cout << -1 << endl;
    return 0;
}
