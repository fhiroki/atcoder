#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;

    int ans = x - a;
    ans -= ans / b * b;

    cout << ans << endl;
    return 0;
}
