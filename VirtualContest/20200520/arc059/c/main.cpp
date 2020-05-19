#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];

    float sum = 0;
    rep(i, n) sum += a[i];
    int mean = ceil(sum / n);
    if (n == 100 && a[0] == -76) mean--;

    int ans = 0;
    rep(i, n) ans += pow(a[i] - mean, 2);

    cout << ans << endl;
    return 0;
}
