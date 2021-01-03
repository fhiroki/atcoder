#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int sa = 0, sb = 0;
    rep(i, 3) sa += a[i] - '0';
    rep(i, 3) sb += b[i] - '0';

    if (sa >= sb)
        cout << sa << endl;
    else
        cout << sb << endl;
    return 0;
}
