#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    int a, b, k;
    cin >> a >> b >> k;
    s.insert(a);
    s.insert(b);

    rep(i, k) {
        int p;
        cin >> p;
        s.insert(p);
    }

    if (s.size() == k + 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
