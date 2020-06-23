#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;

    rep(i, n) {
        int l, r;
        cin >> l >> r;
        reverse(s.begin() + l - 1, s.begin() + r);
    }

    cout << s << endl;
    return 0;
}
