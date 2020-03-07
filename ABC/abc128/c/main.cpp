#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int ans = 0;
    vector<int> a(N);

    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int s;
            cin >> s;
            s--;
            a[s] |= 1 << i;
        }
    }

    int p = 0;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        p |= x << i;
    }

    for (int bit = 0; bit < (1 << N); bit++) {
        int t = 0;
        for (int i = 0; i < N; i++) {
            if (bit >> i & 1) {
                t ^= a[i];
            }
        }
        if (t == p) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
