#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int m, n, N;
    cin >> m >> n >> N;

    int ans = N;
    while (N >= m) {
        int cnt = N / m * n;
        N = cnt + N % m;
        ans += cnt;
    }

    cout << ans << endl;
    return 0;
}
