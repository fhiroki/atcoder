#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    ll ng = 0, r = 0, g = 0, b = 0;
    rep(i, n) {
        s[i] == 'R' ? r++ : s[i] == 'G' ? g++ : b++;
        rep(d, n) {
            int j = i + d, k = j + d;
            if (k >= n) break;
            if (s[i] != s[j] && s[i] != s[k] && s[j] != s[k]) ng++;
        }
    }

    cout << r * g * b - ng << endl;
    return 0;
}
