#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    if ((int)s.size() == 3) reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
