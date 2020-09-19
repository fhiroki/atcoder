#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    rep(i, n) {
        int a, b;
        cin >> a >> b;
        ans += a * b;
    }

    cout << floor(ans * 1.05) << endl;
    return 0;
}
