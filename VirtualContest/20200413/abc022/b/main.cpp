#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    set<int> A;
    rep(i, n) {
        int a;
        cin >> a;
        if (A.find(a) == A.end()) {
            A.insert(a);
        } else {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
