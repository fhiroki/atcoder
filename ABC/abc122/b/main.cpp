#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    string acgt = "ACGT";

    int ans = 0;
    int c = 0;
    rep(i, s.size()) {
        if (acgt.find(s[i]) != string::npos) c++;
        else c = 0;
        ans = max(ans, c);
    }

    cout << ans << endl;
    return 0;
}
