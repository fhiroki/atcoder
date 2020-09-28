#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v1, v2;
    rep(i, n) {
        int x, y;
        cin >> x >> y;
        v1.push_back(x + y);
        v2.push_back(x - y);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    cout << max(v1.back() - v1.front(), v2.back() - v2.front()) << endl;
    return 0;
}
