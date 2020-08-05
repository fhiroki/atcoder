#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    rep(i, n) {
        int x;
        cin >> x;
        a[i] = (i == 0) ? x : a[i - 1] + x;
        sum += x;
    }

    if (sum % n != 0) {
        cout << -1 << endl;
        return 0;
    }

    int ans = n - 1, cnt = sum / n;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] == cnt * i) ans--;
    }

    cout << ans << endl;
    return 0;
}
