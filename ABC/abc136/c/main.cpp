#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int pre = -999;
    rep(i, n) {
        int h;
        cin >> h;
        if (pre <= h-1) pre = h-1;
        else if (pre <= h) pre = h;
        else {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
