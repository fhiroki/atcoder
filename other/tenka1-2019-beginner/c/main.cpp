#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int w = count(s.begin(), s.end(), '.');
    int b = 0;
    int ans = w;

    rep(i, n) {
        if (s[i] == '.')
            w--;
        else
            b++;
        ans = min(ans, w + b);
    }

    cout << ans << endl;
    return 0;
}
