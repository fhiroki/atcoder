#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    while (true) {
        string s = to_string(n);
        if (s[0] == s[1] && s[1] == s[2]) break;
        n++;
    }

    cout << n << endl;
    return 0;
}
