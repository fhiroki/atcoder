#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    rep(i, w + 2) cout << '#';
    cout << endl;
    rep(i, h) {
        string s;
        cin >> s;
        cout << '#' << s << '#' << endl;
    }
    rep(i, w + 2) cout << '#';
    cout << endl;

    return 0;
}
