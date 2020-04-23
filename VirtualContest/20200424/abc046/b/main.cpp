#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    ll ans = k * pow(k - 1, n - 1);

    printf("%lld\n", ans);
    return 0;
}
