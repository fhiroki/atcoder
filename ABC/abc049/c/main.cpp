#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    string cands[4] = {"dreamer", "eraser", "dream", "erase"};

    for (int i = n - 1; i >= 0; i--) {
        rep(j, 4) {
            int len = cands[j].length();
            if (s.substr(i, len) == cands[j]) {
                s.erase(s.begin() + i, s.begin() + i + len);
            }
        }
    }

    if (s.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
