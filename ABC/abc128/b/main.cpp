#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
using P = pair<pair<string, int>, int>;

bool comp(P a, P b) {
    if (a.first.first != b.first.first) {
        return a.first.first < b.first.first;
    } else {
        return a.first.second > b.first.second;
    }
}

int main() {
    int n;
    cin >> n;
    vector<P> r(n);
    rep(i, n) {
        string s;
        int p;
        cin >> s >> p;
        r[i].first = make_pair(s, p);
        r[i].second = i+1;
    }

    sort(r.begin(), r.end(), comp);

    for (auto a: r) cout << a.second << endl;

    return 0;
}
