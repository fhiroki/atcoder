#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    string t = "b";
    for (int i = 1; i < 100; i++) {
        if (t == s) {
            cout << i - 1 << endl;
            return 0;
        }
        if (i % 3 == 0)
            t = 'b' + t + 'b';
        else if (i % 3 == 1)
            t = 'a' + t + 'c';
        else if (i % 3 == 2)
            t = 'c' + t + 'a';
    }

    cout << -1 << endl;
    return 0;
}
