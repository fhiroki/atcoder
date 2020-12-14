#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    int ans = min({a1, a2, a3, a4});

    cout << ans << endl;
    return 0;
}
