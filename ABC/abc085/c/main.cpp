#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    int N, Y;
    cin >> N >> Y;
    int x = -1, y = -1, z = -1;

    rep(i, N + 1) rep(j, N + 1) {
        if (9*i + 4*j == Y/1000 - N) {
            int k = N - (i + j);
            if (k >= 0) x = i, y = j, z = k;
        }
    }

    printf("%d %d %d\n", x, y, z);
    return 0;
}
