#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    else if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int q;
    cin >> q;

    int likes[100001] = {0};
    for (int i = 1; i <= 1e5; i++) {
        likes[i] += likes[i - 1];
        if (isPrime(i) && isPrime((i + 1) / 2)) likes[i]++;
    }

    rep(i, q) {
        int l, r;
        cin >> l >> r;
        cout << likes[r] - likes[l - 1] << endl;
    }

    return 0;
}
