#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> v(n);
    rep(i, n) cin >> v[i];

    sort(v.rbegin(), v.rend());

    while (v.size() > 1) {
        float f1 = v.back();
        v.pop_back();
        float f2 = v.back();
        v.pop_back();
        v.push_back((f1 + f2) / 2.0);
    }

    cout << v[0] << endl;
    return 0;
}
