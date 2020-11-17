#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    string a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 0;
    rep(i, n) {
        set<char> s;
        s.insert(a[i]);
        s.insert(b[i]);
        s.insert(c[i]);
        ans += s.size() - 1;
    }

    cout << ans << endl;
    return 0;
}
