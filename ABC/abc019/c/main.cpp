#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;

    rep(i, n) {
        int a;
        cin >> a;
        while (a % 2 == 0) a /= 2;
        s.insert(a);
    }

    cout << s.size() << endl;
    return 0;
}
