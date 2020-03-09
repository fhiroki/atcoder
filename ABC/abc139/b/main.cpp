#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 1;
    int unused = a;

    while (unused < b) {
        ans++;
        unused += a - 1;
    }
    if (b == 1) ans = 0;

    cout << ans << endl;
    return 0;
}
