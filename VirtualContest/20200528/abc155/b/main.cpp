#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    rep(i, n) {
        int a;
        cin >> a;
        if (a % 2 == 0 && !(a % 3 == 0 || a % 5 == 0)) {
            cout << "DENIED" << endl;
            return 0;
        }
    }

    cout << "APPROVED" << endl;
    return 0;
}
