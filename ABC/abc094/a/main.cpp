#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;

    if (x >= a && x <= a + b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
