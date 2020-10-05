#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    int w;
    cin >> s >> w;

    for (int i = 0; i < (int)s.size(); i += w) cout << s[i];
    cout << endl;

    return 0;
}
