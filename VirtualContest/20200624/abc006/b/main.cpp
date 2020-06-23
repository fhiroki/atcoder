#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int const MOD = 10007;
int a[1000005];

int dfs(int n) {
    if (n <= 2) return 0;
    if (a[n] > 0) return a[n];

    a[n] = (dfs(n - 1) + dfs(n - 2) + dfs(n - 3)) % MOD;
    return a[n];
}

int main() {
    int n;
    cin >> n;

    a[3] = 1;
    cout << dfs(n) << endl;
    return 0;
}
