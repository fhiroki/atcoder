#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s, t, u;
    int a, b;
    cin >> s >> t >> a >> b >> u;

    if (s == u) a--;
    if (t == u) b--;

    cout << a << ' ' << b << endl;
    return 0;
}
