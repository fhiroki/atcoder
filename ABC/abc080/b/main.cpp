#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    string s = to_string(n);
    rep(i, s.size()) x += s[i] - '0';

    if (n % x == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
