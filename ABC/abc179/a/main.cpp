#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    cout << s;
    if (s[s.length() - 1] == 's')
        cout << "es" << endl;
    else
        cout << "s" << endl;
    return 0;
}
