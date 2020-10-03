#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    bool first = true;

    while (cin >> s) {
        char ans = 'A';
        if (s == "Left")
            ans = '<';
        else if (s == "Right")
            ans = '>';

        if (!first) cout << ' ';
        cout << ans;
        first = false;
    }
    cout << endl;

    return 0;
}
