#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = max(a, b) * 2;
    if (a != b) ans--;

    cout << ans << endl;
    return 0;
}
