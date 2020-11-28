#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = count(s.begin(), s.end(), 'o') + 15 - s.size();

    if (ans >= 8)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
