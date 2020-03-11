#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p1(n);
    rep(i, n) cin >> p1[i];
    vector<int> p2(n);
    copy(p1.begin(), p1.end(), p2.begin());
    sort(p1.begin(), p1.end());

    int diff = 0;
    rep(i, n) {
        if (p1[i] != p2[i]) diff++;
    }

    if (diff <= 2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
