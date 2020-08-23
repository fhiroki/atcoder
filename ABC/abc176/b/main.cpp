#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    ll n = s.size();

    ll ans = 0;
    rep(i, n) ans += s[i] - '0';

    if (ans % 9 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
