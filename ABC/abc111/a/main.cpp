#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = to_string(n);

    rep(i, 3) {
        if (s[i] == '1')
            cout << 9;
        else
            cout << 1;
    }
    cout << endl;

    return 0;
}
