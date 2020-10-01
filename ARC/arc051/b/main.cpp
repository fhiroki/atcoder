#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int k;
    cin >> k;

    int a = 2, b = 1;
    rep(i, k - 1) {
        int c = a + b;
        b = a;
        a = c;
    }

    cout << a << ' ' << b << endl;
    return 0;
}
