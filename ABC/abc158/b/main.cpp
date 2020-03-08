#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    ll N, A, B;
    cin >> N >> A >> B;
    if (A == 0) {
        cout << 0 << endl;
        return 0;
    }

    ll C = A + B;
    ll cnt = floor(N / C);
    ll ans = cnt * A;

    ll rest = N - C * cnt;
    if (rest > 0) {
        if (rest <= A) ans += rest;
        if (rest > A) ans += A;
    }

    cout << ans << endl;
    return 0;
}
