#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i * i < n; i++) {
        ans++;
        if (n / i > i) ans += (ceil(n / i) - (i + 1)) * 2;
    }

    cout << ans << endl;
    return 0;
}
