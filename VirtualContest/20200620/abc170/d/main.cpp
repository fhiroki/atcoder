#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int const MAX = 1000001;
int a[MAX];

int main() {
    int n;
    cin >> n;
    rep(i, n) {
        int x;
        cin >> x;
        a[x]++;
    }

    int ans = 0;
    for (int i = 1; i < MAX; i++) {
        if (a[i] > 0) {
            if (a[i] == 1) ans++;
            for (int j = 2; i * j < MAX; j++) a[i * j] = 0;
        }
    }

    cout << ans << endl;
    return 0;
}
