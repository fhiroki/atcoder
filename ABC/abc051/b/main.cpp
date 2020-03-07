#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    int K, S;
    cin >> K >> S;

    int ans = 0;
    for (int x = 0; x <= K; x++) {
        for (int y = 0; y <= K; y++) {
            int z = S - (x + y);
            if (z >= 0 && z <= K) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
