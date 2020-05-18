#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll a;
    cin >> a;

    for (int i = 10; i <= 10000; i++) {
        string s = to_string(i);
        ll sum = 0;
        rep(j, s.size()) sum = sum * i + s[j] - '0';
        if (sum == a) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
