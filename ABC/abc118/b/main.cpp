#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ans = 0;
    int A[m] = {0};
    rep(i, n) {
        int k; cin >> k;
        rep(j, k) {
            int a; cin >> a; a--;
            A[a] += 1;
        }
    }

    rep(i, m) if (A[i] == n) ans++;

    cout << ans << endl;
    return 0;
}
