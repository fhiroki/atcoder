#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    rep(i, n) cin >> a[i], sum += a[i];

    double mean = sum / double(n);
    pair<int, double> ans = {0, 1000.0};
    rep(i, n) {
        double d = abs(a[i] - mean);
        if (ans.second > d) ans = {i, d};
    }

    cout << ans.first << endl;
    return 0;
}
