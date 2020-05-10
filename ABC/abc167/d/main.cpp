#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> s;
    vector<int> ord(n + 1, -1);

    int v = 1;
    while (ord[v] == -1) {
        ord[v] = s.size();
        s.push_back(v);
        v = a[v - 1];
    }
    int c = s.size() - ord[v];
    int l = ord[v];

    if (k < l)
        cout << s[k] << endl;
    else {
        k -= l;
        k %= c;
        cout << s[l + k] << endl;
    }

    return 0;
}
