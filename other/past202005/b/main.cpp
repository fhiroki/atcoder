#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int N, M, q;
    cin >> N >> M >> q;
    int p[N + 1][M + 1] = {0};
    int solves[M + 1] = {0};

    rep(i, q) {
        int s, n, m;
        cin >> s >> n;
        if (s == 1) {
            ll sum = 0;
            rep(j, M + 1) if (p[n][j] == 1) sum += N - solves[j];
            cout << sum << endl;
        } else {
            cin >> m;
            p[n][m] = 1;
            solves[m]++;
        }
    }

    return 0;
}
