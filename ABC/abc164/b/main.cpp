#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int i = 0;
    while (a > 0 && c > 0) {
        if (i % 2 == 0)
            c -= b;
        else
            a -= d;
        i++;
    }

    if (a > 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
