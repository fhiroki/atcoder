#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    ll r = 0, g = 0, b = 0, ng = 0;
    rep(i, n) {
        s[i] == 'R' ? r++ : s[i] == 'G' ? g++ : b++;
        for (int j = i + 1; j < n - 1; j++) {
            int k = 2 * j - i;
            if (k >= n) break;
            if (s[i] != s[j] && s[i] != s[k] && s[j] != s[k]) ng++;
        }
    }

    cout << r * g * b - ng << endl;
    return 0;
}
