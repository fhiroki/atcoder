#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i, n) cin >> d[i];
    sort(d.begin(), d.end());

    int midl = d[n/2-1];
    int midr = d[n/2];
    int ans = midr - midl;

    cout << ans << endl;
    return 0;
}
