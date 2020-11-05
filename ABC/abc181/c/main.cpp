#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    rep(i, n) cin >> x[i] >> y[i];

    for (int a = 0; a < n - 2; a++) {
        for (int b = a + 1; b < n - 1; b++) {
            for (int c = b + 1; c < n; c++) {
                if (x[a] == x[b] && x[a] == x[c]) {
                    cout << "Yes" << endl;
                    return 0;
                } else if (x[a] == x[b] || x[a] == x[c] || x[b] == x[c])
                    continue;

                double ab = abs((y[a] - y[b]) / double(x[a] - x[b]));
                double ac = abs((y[a] - y[c]) / double(x[a] - x[c]));
                double bc = abs((y[b] - y[c]) / double(x[b] - x[c]));
                if (ab == ac && ac == bc && ab == bc) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
