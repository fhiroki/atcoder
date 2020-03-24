#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int H, W, h, w;
    cin >> H >> W >> h >> w;

    int ans = (H-h)*(W-w);

    cout << ans << endl;
    return 0;
}
