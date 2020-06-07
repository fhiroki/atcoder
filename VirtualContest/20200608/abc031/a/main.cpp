#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, d;
    cin >> a >> d;

    int ans = (min(a, d) + 1) * max(a, d);

    cout << ans << endl;
    return 0;
}
