#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], p[n], q[n];
    rep(i, n) a[i] = i + 1;
    rep(i, n) cin >> p[i];
    rep(i, n) cin >> q[i];

    int idx = 0, p_idx = 0, q_idx = 0;
    do {
        idx++;
        bool p_ok = true, q_ok = true;
        rep(i, n) if (a[i] != p[i]) p_ok = false;
        rep(i, n) if (a[i] != q[i]) q_ok = false;

        if (p_ok) p_idx = idx;
        if (q_ok) q_idx = idx;
    } while (next_permutation(a, a + n));

    cout << abs(p_idx - q_idx) << endl;
    return 0;
}
