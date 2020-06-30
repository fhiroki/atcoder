#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> a;

    rep(i, n) {
        int A;
        cin >> A;
        a.push_back({A, i + 1});
    }
    sort(a.begin(), a.end(), greater<pair<int, int>>());

    rep(i, n) cout << a[i].second << endl;

    return 0;
}
