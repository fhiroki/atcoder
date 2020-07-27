#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (!(s[i] == 'o' || s[i] == 'k' || s[i] == 'u' ||
              (s[i] == 'c' && s[i + 1] == 'h') ||
              (s[i] == 'h' && s[i - 1] == 'c'))) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
