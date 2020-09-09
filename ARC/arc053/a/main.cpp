#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    int ans = (h - 1) * w + (w - 1) * h;

    cout << ans << endl;
    return 0;
}
