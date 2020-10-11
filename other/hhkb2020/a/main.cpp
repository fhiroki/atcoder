#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    char s, t;
    cin >> s >> t;

    if (s == 'Y')
        cout << (char)toupper(t) << endl;
    else
        cout << t << endl;
    return 0;
}
