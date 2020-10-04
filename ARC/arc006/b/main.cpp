#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    string s[l], g, tmp;
    getline(cin, tmp);
    rep(i, l) getline(cin, s[i]);
    getline(cin, g);

    int now = find(g.begin(), g.end(), 'o') - g.begin();
    for (int i = l - 1; i >= 0; i--) {
        if (s[i][now - 1] == '-')
            now -= 2;
        else if (s[i][now + 1] == '-')
            now += 2;
    }

    cout << now / 2 + 1 << endl;
    return 0;
}
