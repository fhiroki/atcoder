#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(1 << n);
    rep(i, 1 << n) cin >> a[i];
    int half = 1 << (n - 1);
    int max = max_element(a.begin(), a.end()) - a.begin();
    auto start = max < half ? a.begin() + half : a.begin();
    int ans = max_element(start, start + half) - a.begin() + 1;

    cout << ans << endl;
    return 0;
}
