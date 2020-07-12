#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (i % 2 == 1 && a % 2 == 1) ans++;
    }

    cout << ans << endl;
    return 0;
}
