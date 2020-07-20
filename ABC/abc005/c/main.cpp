#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int t, n, m;
    cin >> t >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    cin >> m;

    rep(i, m) {
        int b;
        cin >> b;
        bool ok = false;

        for (int i = 0; i < a.size(); i++) {
            if (a[i] <= b && b <= a[i] + t) {
                ok = true;
                a.erase(a.begin() + i);
                break;
            }
        }

        if (!ok) {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;
    return 0;
}
