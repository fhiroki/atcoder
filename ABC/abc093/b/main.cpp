#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    set<int> v;

    for (int i = a; i < a + k; i++) {
        if (i <= b) v.insert(i);
    }
    for (int i = b; i > b - k; i--) {
        if (i >= a) v.insert(i);
    }

    for (auto x : v) cout << x << endl;

    return 0;
}
