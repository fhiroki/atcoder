#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0, ans = 0;
    rep(i, n) {
        int d1, d2;
        cin >> d1 >> d2;
        if (d1 == d2)
            cnt++;
        else
            cnt = 0;
        ans = max(ans, cnt);
    }

    if (ans >= 3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
