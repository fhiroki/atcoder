#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int card = n;
    rep(i, m) {
        if (card <= a) {
            card += b;
        }

        int c;
        cin >> c;
        card -= c;

        if (card < 0 && i != n - 1) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << "complete" << endl;
    return 0;
}
