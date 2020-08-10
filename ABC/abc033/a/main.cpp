#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    set<char> s;
    rep(i, 4) {
        char c;
        cin >> c;
        s.insert(c);
    }

    if (s.size() == 1)
        cout << "SAME" << endl;
    else
        cout << "DIFFERENT" << endl;
    return 0;
}
