#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int gcd(long a, long b) {
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}

int main() {
    long A, B;
    cin >> A >> B;

    long ans = A * B / gcd(A, B);

    cout << ans << endl;
    return 0;
}
