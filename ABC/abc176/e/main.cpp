#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b, m;
    cin >> a >> b >> m;
    vector<int> H(a), W(b);

    int mh = 0, mw = 0, cnt = 0;
    vector<pair<int, int>> V;
    rep(i, m) {
        int h, w;
        cin >> h >> w;
        mh = max(mh, ++H.at(--h));
        mw = max(mw, ++W.at(--w));
        V.push_back({h, w});
    }

    for (auto v : V) {
        if (H.at(v.first) == mh && W.at(v.second) == mw) cnt++;
    }

    int ans = mh + mw;
    if (cnt == count(H.begin(), H.end(), mh) * count(W.begin(), W.end(), mw))
        ans--;
    cout << ans << endl;
    return 0;
}
