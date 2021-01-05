#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int na, nb;
    cin >> na >> nb;

    set<int> s;
    vector<int> A;
    double ans = 0;

    rep(i, na) {
        int a;
        cin >> a;
        s.insert(a);
        A.push_back(a);
    }
    sort(A.begin(), A.end());

    rep(i, nb) {
        int b;
        cin >> b;
        s.insert(b);
        if (b == *lower_bound(A.begin(), A.end(), b)) ans++;
    }

    printf("%.10f\n", ans / s.size());
    return 0;
}
