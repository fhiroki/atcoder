#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int N, K, M;
    cin >> N >> K >> M;

    int ans = N * M;
    rep(i, N-1) {
        int a;
        cin >> a;
        ans -= a;
    }

    if (ans <= 0) ans = 0;
    if (ans > K) ans = -1;
    cout << ans << endl;
    return 0;
}
