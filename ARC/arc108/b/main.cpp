#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    rep(i, n - 2) {
        if (s.substr(i, 3) == "fox") {
            s.erase(i, 3);
            i = max(-1, i - 3);
            n -= 3;
        }
    }

    cout << s.size() << endl;
    return 0;
}
