#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int x;
    cin >> x;

    int ans = 9;
    for (int i = 400; i <= x; i += 200) ans--;

    cout << ans << endl;
    return 0;
}
