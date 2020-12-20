#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        if (s.find('7') == string::npos) {
            stringstream ss;
            ss << oct << i;
            if (ss.str().find('7') == string::npos) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
