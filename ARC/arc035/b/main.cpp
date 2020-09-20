#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
int const MOD = 1e9 + 7;
int const MAX = 10005;

int cnt[MAX];

ll factMod(int x) {
    ll sum = 1;
    for (int i = 2; i <= x; i++) {
        sum = (sum * i) % MOD;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int t[n];
    rep(i, n) {
        cin >> t[i];
        cnt[t[i]]++;
    }
    sort(t, t + n);

    ll time = 0, ans_pena = 0;
    rep(i, n) {
        time += t[i];
        ans_pena += time;
    }

    ll ans_cnt = 1;
    rep(i, MAX) {
        if (cnt[i]) ans_cnt = (ans_cnt * factMod(cnt[i])) % MOD;
    }

    cout << ans_pena << endl;
    cout << ans_cnt << endl;
    return 0;
}
