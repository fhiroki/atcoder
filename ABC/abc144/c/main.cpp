#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;

    ll ans = 1e12;
    for (ll i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            ll move = i + N / i - 2;
            if (move < ans) ans = move;
        }
    }

    cout << ans << endl;
    return 0;
}
