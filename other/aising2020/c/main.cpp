#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int a[100005];

int main() {
    int n;
    cin >> n;

    for (int x = 1; x * x <= n; x++) {
        for (int y = 1; y * y <= n; y++) {
            for (int z = 1; z * z <= n; z++) {
                int v = x * x + y * y + z * z + x * y + y * z + z * x;
                if (v <= n) a[v]++;
            }
        }
    }

    rep(i, n) cout << a[i + 1] << endl;
    return 0;
}
