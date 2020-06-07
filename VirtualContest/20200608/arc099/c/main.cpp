#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double n, k;
    cin >> n >> k;

    int ans = ceil((n - 1) / (k - 1));

    cout << ans << endl;
    return 0;
}
