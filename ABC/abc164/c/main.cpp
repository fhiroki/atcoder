#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> s;

    rep(i, n) {
        string a;
        cin >> a;
        s.insert(a);
    }

    cout << s.size() << endl;
    return 0;
}
