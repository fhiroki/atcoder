#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, q; string s;
    cin >> n >> q >> s;

    int iac[n+1];
    iac[0] = 0;
    rep(i, n) {
        iac[i+1] = iac[i];
        if (s[i] == 'A' && s[i+1] == 'C') iac[i+1] += 1;
    }

    rep(i, q) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << iac[r] - iac[l] << endl;
    }

    return 0;
}
