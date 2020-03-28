#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int x;
    cin >> x;

    int ans = x / 500 * 1000 + (x % 500) / 5 * 5;

    cout << ans << endl;
    return 0;
}
