#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> H(N);
    rep(i, N) cin >> H[i];
    sort(H.begin(), H.end());

    unsigned long ans = 0;
    for (int i = 0; i < (N - K); i++) {
        ans += H[i];
    }

    cout << ans << endl;
    return 0;
}
