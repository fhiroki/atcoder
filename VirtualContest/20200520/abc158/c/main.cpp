#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = 1; i < 100000; i++) {
        if (floor(i * 0.08) == a && floor(i * 0.1) == b) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
