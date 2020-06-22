#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt[6] = {0};

    rep(i, n) {
        double upper, lower;
        cin >> upper >> lower;
        if (upper >= 35)
            cnt[0]++;
        else if (upper >= 30)
            cnt[1]++;
        else if (upper >= 25)
            cnt[2]++;
        else if (upper < 0)
            cnt[5]++;

        if (lower >= 25) cnt[3]++;
        if (lower < 0 && upper >= 0) cnt[4]++;
    }

    rep(i, 5) cout << cnt[i] << ' ';
    cout << cnt[5] << endl;
    return 0;
}
