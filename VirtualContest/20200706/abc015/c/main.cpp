#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int n, k;
int t[5][5];

bool dfs(int v, int d) {
    if (d == n) return v == 0;
    rep(i, k) {
        if (dfs(v ^ t[d][i], d + 1)) return true;
    }
    return false;
}

int main() {
    cin >> n >> k;
    rep(i, n) rep(j, k) cin >> t[i][j];

    if (dfs(0, 0))
        cout << "Found" << endl;
    else
        cout << "Nothing" << endl;
    return 0;
}
