#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    rep(i, n) {
        int c1 = 0, c2 = 0;
        for (int j = i; j < n; j++) {
            if (s[j] == 'A')
                c1++;
            else if (s[j] == 'T')
                c1--;
            else if (s[j] == 'C')
                c2++;
            else
                c2--;
            if (c1 == 0 && c2 == 0) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
