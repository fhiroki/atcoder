#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> ans;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ans.push_back(i);
            if (i != n / i) ans.push_back(n / i);
        }
    }

    sort(ans.begin(), ans.end());
    for (auto e : ans) cout << e << endl;
    return 0;
}
