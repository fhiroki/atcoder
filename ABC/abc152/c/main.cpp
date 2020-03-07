#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int N;
    cin >> N;

    int ans = 0;
    int minv = 2 * 1e5;
    for (int i = 0; i < N; i++) {
        int p;
        cin >> p;
        if (p <= minv) {
            minv = p;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
