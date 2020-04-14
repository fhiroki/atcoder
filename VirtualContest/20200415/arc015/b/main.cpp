#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int cnt[6] = {0};
    rep(i, n) {
        float Mt, mt;
        cin >> Mt >> mt;
        if (Mt >= 35)
            cnt[0]++;
        else if (Mt >= 30)
            cnt[1]++;
        else if (Mt >= 25)
            cnt[2]++;
        else if (Mt < 0)
            cnt[5]++;

        if (mt >= 25) cnt[3]++;
        if (mt < 0 && Mt >= 0) cnt[4]++;
    }

    rep(i, 6) {
        cout << cnt[i];
        if (i != 5) cout << ' ';
    }
    cout << endl;
    return 0;
}
