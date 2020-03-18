#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    rep(i, n) {
        if (i == k-1) cout << tolower(s[i], locale());
        else cout << s[i];
    }

    cout << endl;
    return 0;
}
