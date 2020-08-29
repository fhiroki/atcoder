#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double d, t, s;
    cin >> d >> t >> s;

    if (d / s <= t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
