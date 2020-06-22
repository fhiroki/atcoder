#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    string s = "";
    while (n > 0) {
        n -= 1;
        s = char('a' + n % 26) + s;
        n /= 26;
    }

    cout << s << endl;
    return 0;
}
