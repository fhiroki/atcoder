#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int x;
    cin >> x;

    int n = x / 100;
    int m = x % 100;

    if (m <= n * 5)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
