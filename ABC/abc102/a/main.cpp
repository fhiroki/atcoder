#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = n % 2 == 0 ? n : 2 * n;

    cout << ans << endl;
    return 0;
}
