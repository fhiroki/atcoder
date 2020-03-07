#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    int d[N];
    rep(i, N) cin >> d[i];

    int ans = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            ans += d[i] * d[j];
        }
    }

    cout << ans << endl;
    return 0;
}
