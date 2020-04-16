#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    for (int i = n / 2 - 1; i > 0; i--) {
        if (s.substr(0, i) == s.substr(i, i)) {
            cout << 2 * i << endl;
            return 0;
        }
    }

    return 0;
}
