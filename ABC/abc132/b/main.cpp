#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n];
    rep(i, n) cin >> p[i];

    int ans = 0;
    for (int i = 1; i < n-1; i++) {
        if (p[i-1] < p[i] && p[i] < p[i+1]) ans++;
        else if (p[i-1] > p[i] && p[i] > p[i+1]) ans++;
    }

    cout << ans << endl;
    return 0;
}
