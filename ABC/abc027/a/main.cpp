#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int l[3];
    rep(i, 3) cin >> l[i];

    if (l[0] == l[1])
        cout << l[2] << endl;
    else if (l[1] == l[2])
        cout << l[0] << endl;
    else if (l[0] == l[2])
        cout << l[1] << endl;
    return 0;
}
