#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> b(n);
    copy(a.begin(), a.end(), b.begin());

    int maxv = *max_element(b.begin(), b.end());
    size_t maxi = distance(b.begin(), max_element(b.begin(), b.end()));
    b.erase(b.begin() + maxi);
    int maxv2 = *max_element(b.begin(), b.end());

    rep(i, n) {
        if (a[i] == maxv) cout << maxv2 << endl;
        else cout << maxv << endl;
    }

    return 0;
}
