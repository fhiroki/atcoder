#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    P a[n];
    rep(i, n) {
        int x;
        cin >> x;
        a[i] = {x, i + 1};
    }
    sort(a, a + n, greater<P>());

    rep(i, n) cout << a[i].second << endl;
    return 0;
}
