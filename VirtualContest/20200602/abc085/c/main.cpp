#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;

    for (int a = 0; a <= y / 10000; a++) {
        for (int b = 0; b <= y / 5000; b++) {
            int c = y / 1000 - 10 * a - 5 * b;
            if (a + b + c == n && c >= 0) {
                printf("%d %d %d\n", a, b, c);
                return 0;
            }
        }
    }

    printf("-1 -1 -1\n");
    return 0;
}
