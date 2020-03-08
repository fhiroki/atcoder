#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    int pat[n] = {0};
    rep(i, q) {
        int a;
        cin >> a;
        a--;
        pat[a]++;
    }

    rep(i, n) {
        if (k - q + pat[i] > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
