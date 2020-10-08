#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int c1 = 0, c2 = 0, c3 = 0;
    rep(i, n) {
        int p;
        cin >> p;
        if (p <= a)
            c1++;
        else if (p <= b)
            c2++;
        else
            c3++;
    }

    cout << min({c1, c2, c3}) << endl;
    return 0;
}
