#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) {
        int x;
        cin >> x;
        x--;
        a[i] = x;
    }

    int passed[n] = {0};
    int ans = 1, i = 0;

    while (a[i] != 1) {
        passed[i] = 1;
        i = a[i];
        ans++;
        if (passed[i]) {
            ans = -1;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
