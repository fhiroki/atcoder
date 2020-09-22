#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int f(ll x) {
    int sum = 0;
    while (x > 0) sum += x % 10, x /= 10;
    return sum;
}

int main() {
    ll n;
    cin >> n;

    vector<ll> v;
    for (ll x = n; x >= n - 200; x--) {
        if (x + f(x) == n) v.push_back(x);
    }

    int cnt = v.size();
    cout << cnt << endl;
    for (int i = cnt - 1; i >= 0; i--) {
        cout << v[i] << endl;
    }
    return 0;
}
