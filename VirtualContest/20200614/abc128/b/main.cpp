#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

struct Restaurant {
    int idx;
    string city;
    int evaluation;
};

bool cmp(Restaurant a, Restaurant b) {
    if (a.city != b.city)
        return a.city < b.city;
    else
        return a.evaluation > b.evaluation;
}

int main() {
    int n;
    cin >> n;
    vector<Restaurant> r(n);

    rep(i, n) {
        string s;
        int p;
        cin >> s >> p;
        r[i] = {i + 1, s, p};
    }

    sort(r.begin(), r.end(), cmp);

    for (auto e : r) cout << e.idx << endl;
    return 0;
}
