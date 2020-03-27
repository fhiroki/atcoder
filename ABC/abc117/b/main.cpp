#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int l[n];
    rep(i, n) cin >> l[i];

    int* maxv = max_element(l, l+n);
    int maxi = distance(l, maxv);
    int other = 0;

    rep(i, n) if (i != maxi) other += l[i];

    if (*maxv < other) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
