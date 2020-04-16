#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    int ans = 0;
    int minv = 101;
    for (int i = 0; i < n; i++) {
        ans += l + i;
        if (abs(l + i) < abs(minv)) minv = l + i;
    }

    cout << ans - minv << endl;
    return 0;
}
