#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, q;
    cin >> n;
    map<int, int> m;
    ll sum = 0;
    rep(i, n) {
        int a;
        cin >> a;
        m[a]++;
        sum += a;
    }
    cin >> q;

    rep(i, q) {
        int b, c;
        cin >> b >> c;
        sum += (c - b) * m[b];

        m[c] += m[b];
        m.erase(b);

        cout << sum << endl;
    }

    return 0;
}
