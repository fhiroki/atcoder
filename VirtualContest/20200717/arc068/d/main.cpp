#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    map<int, int> m;
    rep(i, n) m[a[i]]++;

    int unique = 0, even = 0;
    for (auto e : m) {
        unique++;
        if (e.second % 2 == 0) even++;
    }

    int ans = unique - even % 2;
    cout << ans << endl;
    return 0;
}
