#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());

    if (s == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
