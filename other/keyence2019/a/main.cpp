#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n[4];
    rep(i, 4) cin >> n[i];
    sort(n, n + 4);

    if (n[0] == 1 && n[1] == 4 && n[2] == 7 && n[3] == 9)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
