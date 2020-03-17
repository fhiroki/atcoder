#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> a(N);

    rep(i, M) {
        int k; cin >> k;
        rep(j, k) {
            int s; cin >> s; s--;
            a[s] |= 1 << i;
        }
    }

    int p = 0;
    rep(i, M) {
        int x; cin >> x;
        p |= x << i;
    }

    int ans = 0;
    for (int bit = 0; bit < (1 << N); bit++) {
        int t = 0;
        rep(i, N) {
            if (bit >> i & 1) t ^= a[i];
        }
        if (t == p) ans++;
    }

    cout << ans << endl;
    return 0;
}
