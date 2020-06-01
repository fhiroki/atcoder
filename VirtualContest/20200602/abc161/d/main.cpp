#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

vector<ll> a;

void dfs(int d, ll v) {
    a.push_back(v);
    if (d == 10) return;

    for (int i = -1; i <= 1; i++) {
        int b = v % 10 + i;
        if (b >= 0 && b <= 9) dfs(d + 1, v * 10 + b);
    }
}

int main() {
    int k;
    cin >> k;

    for (int i = 1; i < 10; i++) dfs(1, i);
    sort(a.begin(), a.end());

    cout << a[k - 1] << endl;
    return 0;
}
