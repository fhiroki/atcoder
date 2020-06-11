#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = -1;
    if (a <= 9 && b <= 9) ans = a * b;

    cout << ans << endl;
    return 0;
}
