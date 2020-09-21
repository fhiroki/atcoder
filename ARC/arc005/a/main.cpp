#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    rep(i, n) {
        string w;
        cin >> w;
        if (i == n - 1) w = w.substr(0, w.size() - 1);
        if (w == "TAKAHASHIKUN" || w == "Takahashikun" || w == "takahashikun")
            ans++;
    }

    cout << ans << endl;
    return 0;
}
