#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;

    int ans = 0;
    rep(i, n) {
        int d;
        cin >> d;
        s.insert(d);
    }

    cout << s.size() << endl;
    return 0;
}
