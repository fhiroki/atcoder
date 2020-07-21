#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a = -1, b = -1, c = -1;

    int p = m / n;
    int q = m % n;
    if (p == 2)
        a = n - q, b = q, c = 0;
    else if (p == 3)
        a = 0, b = n - q, c = q;
    else if (p == 4 && q == 0)
        a = 0, b = 0, c = n;

    printf("%d %d %d\n", a, b, c);
    return 0;
}
