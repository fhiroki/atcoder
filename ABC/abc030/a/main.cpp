#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b / a == d / c)
        cout << "DRAW" << endl;
    else if (b / a > d / c)
        cout << "TAKAHASHI" << endl;
    else
        cout << "AOKI" << endl;
    return 0;
}
