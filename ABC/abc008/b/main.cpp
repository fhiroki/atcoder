#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    rep(i, n) {
        string s;
        cin >> s;
        m[s]++;
    }

    pair<string, int> maxp = {"", 0};
    for (auto e : m) {
        if (e.second > maxp.second) maxp = e;
    }

    cout << maxp.first << endl;
    return 0;
}
