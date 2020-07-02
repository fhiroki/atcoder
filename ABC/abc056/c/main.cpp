#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int x;
    cin >> x;

    vector<int> a;
    a.push_back(0);
    for (int i = 1; i < 100005; i++) {
        a.push_back(a.back() + i);
        if (a[i] >= x) break;
    }

    cout << a.size() - 1 << endl;
    return 0;
}
