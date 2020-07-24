#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    rep(i, n) {
        int a;
        cin >> a;
        for (int i = a; i >= 1; i--) {
            if (i % 2 == 0 || i % 3 == 2)
                ans++;
            else
                break;
        }
    }

    cout << ans << endl;
    return 0;
}
