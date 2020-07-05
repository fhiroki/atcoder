#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int t[n];
    rep(i, n) cin >> t[i];

    for (int i = 2; i < n; i++) {
        if (t[i - 2] + t[i - 1] + t[i] < k) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
