#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

ll dfs(ll n) {
    if (n == 1) return 1;
    return 2 * dfs(n / 2) + 1;
}

int main() {
    ll h;
    cin >> h;

    cout << dfs(h) << endl;
    return 0;
}
