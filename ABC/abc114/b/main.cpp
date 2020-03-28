#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 1000;
    rep(i, s.size()-2) {
        int x = stoi(s.substr(i, 3));
        ans = min(ans, abs(753 - x));
    }

    cout << ans << endl;
    return 0;
}
