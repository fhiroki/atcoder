#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) sum += i * j;
    }

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (sum - i * j == n) printf("%d x %d\n", i, j);
        }
    }

    return 0;
}
