#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int k;
    cin >> k;

    int x = 0;
    for (int i = 1; i < 1000005; i++) {
        x = x * 10 + 7;
        if (x % k == 0) {
            cout << i << endl;
            return 0;
        }
        x %= k;
    }

    cout << -1 << endl;
    return 0;
}
