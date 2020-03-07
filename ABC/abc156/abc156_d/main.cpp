#include <bits/stdc++.h>
using namespace std;

long nCk(long n, long k) {
    long x = 1, y = 1;
    for (int i = 0; i < k; i++) {
        x *= n-i;
        y *= i+1;
    }
    return x / y;
}

long f(long n) {
    if (n == 0) return 1;
    long x = f(n/2);
    x *= x;
    if (n%2 == 1) x *= 2;
    return x;
}

int main() {
    const int MOD = 1000000007;
    long n, a, b;
    cin >> n >> a >> b;

    long ans = f(n) - 1;

    ans -= nCk(n, a) % MOD;
    ans -= nCk(n, b) % MOD;

    cout << ans << endl;
    return 0;
}

