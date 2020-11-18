#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int v[4];

int main() {
    rep(i, 3) {
        int a, b;
        cin >> a >> b;
        v[a - 1]++;
        v[b - 1]++;
    }

    if (v[0] == 1 && v[1] == 2 && v[2] == 2 && v[3] == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
