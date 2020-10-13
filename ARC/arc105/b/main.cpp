#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> a;
    rep(i, n) {
        int x;
        cin >> x;
        a.insert(x);
    }

    int mx = *a.rbegin();
    int mn = *a.cbegin();
    while (mx != mn) {
        a.erase(mx);
        a.insert(mx - mn);

        mx = *a.rbegin();
        mn = *a.cbegin();
    }

    cout << mx << endl;
    return 0;
}
