#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    string w[n];
    rep(i, n) cin >> w[i];

    bool ok = true;
    rep(i, n - 1) if (w[i][w[i].size() - 1] != w[i + 1][0]) ok = false;
    rep(i, n-1) for (int j = i+1; j < n; j++) {
        if (w[i] == w[j]) ok = false;
    }

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
