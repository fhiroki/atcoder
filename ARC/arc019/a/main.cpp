#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    rep(i, n) {
        int t = s[i] - '0';
        if (t >= 0 && t <= 9)
            cout << t;
        else {
            if (s[i] == 'O' || s[i] == 'D') cout << 0;
            if (s[i] == 'I') cout << 1;
            if (s[i] == 'Z') cout << 2;
            if (s[i] == 'S') cout << 5;
            if (s[i] == 'B') cout << 8;
        }
    }

    cout << endl;
    return 0;
}
