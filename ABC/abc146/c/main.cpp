#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    ll A, B, X;
    cin >> A >> B >> X;

    auto d = [&](ll c) {
        int res = 0;
        while(c) {
            c /= 10;
            res++;
        }
        return res;
    };

    auto f = [&](ll c) {
        return A*c + B*d(c);
    };

    ll l = 0, r = 1e9 + 1;
    while (r - l > 1) {
        ll mid = (l + r) / 2;
        if (f(mid) <= X) l = mid; else r = mid;
    }

    cout << l << endl;
    return 0;
}
