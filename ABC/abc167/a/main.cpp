#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (s == t.substr(0, t.length() - 1)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
