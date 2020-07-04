#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ans = (1900 * m + 100 * (n - m)) * pow(2, m);

    cout << ans << endl;
    return 0;
}
