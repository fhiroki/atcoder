#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    set<int> s;
    rep(i, n) {
        int x;
        cin >> x;
        a[i] = x;
        s.insert(x);
    }

    int cnt = 0;
    map<int, int> mp;
    for (auto e : s) {
        mp[e] = cnt;
        cnt++;
    }

    rep(i, n) cout << mp[a[i]] << endl;

    return 0;
}
