#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b % a == 0) cout << a + b << endl;
    else cout << b - a << endl;

    return 0;
}
