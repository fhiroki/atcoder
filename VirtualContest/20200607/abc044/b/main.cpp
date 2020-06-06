#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string w;
    cin >> w;
    map<char, int> m;

    rep(i, w.size()) m[w[i]]++;

    bool ok = true;
    for (auto e: m) if (e.second % 2 != 0) ok = false;

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
