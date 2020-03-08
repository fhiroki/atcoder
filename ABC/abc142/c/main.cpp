#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<P> a(n);
    rep(i, n) {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    rep(i, n) {
        cout << a[i].second + 1 << ' ';
    }
    cout << endl;

    return 0;
}
