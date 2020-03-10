#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    float ans = 0;
    rep(i, n) {
        float a;
        cin >> a;
        ans += 1 / a;
    }

    cout << 1 / ans << endl;
    return 0;
}
