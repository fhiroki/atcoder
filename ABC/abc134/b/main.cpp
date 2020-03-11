#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    float n, d;
    cin >> n >> d;

    int ans = ceil(n / (d*2+1));

    cout << ans << endl;
    return 0;
}
