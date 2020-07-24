#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << char(toupper(s[0])) << s.substr(1) << endl;
    return 0;
}
