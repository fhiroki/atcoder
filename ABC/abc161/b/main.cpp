#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    float m;
    cin >> n >> m;
    float a[n];
    rep(i, n) cin >> a[i];

    float sum = 0.0, cnt = 0;
    rep(i, n) sum += a[i];
    rep(i, n) if (a[i] >= sum / (4.0 * m)) cnt++;

    if (cnt >= m)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
