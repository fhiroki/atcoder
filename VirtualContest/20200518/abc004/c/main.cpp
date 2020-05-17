#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    n %= 30;

    string ans = "123456";
    rep(i, n) swap(ans[i % 5], ans[i % 5 + 1]);

    cout << ans << endl;
    return 0;
}
