#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int a[6];

int main() {
    string s;
    cin >> s;

    rep(i, s.size()) a[s[i] - 'A']++;

    rep(i, 5) cout << a[i] << ' ';
    cout << a[5] << endl;

    return 0;
}
