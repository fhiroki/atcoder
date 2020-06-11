#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    bool even = true;
    rep(i, n) {
        ll a;
        cin >> a;
        if (a % 2 != 0) even = false;
    }

    if (even)
        cout << "second" << endl;
    else
        cout << "first" << endl;
    return 0;
}
