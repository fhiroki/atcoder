#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int x = m / n;
    int y = m % n;
    int a = -1, b = -1, c = -1;

    if (x == 4 && y == 0) a = 0, b = 0, c = n;
    else if (x == 3) a = 0, b = n-y, c = y;
    else if (x == 2) a = n-y, b = y, c = 0;

    printf("%d %d %d\n", a, b, c);
    return 0;
}
