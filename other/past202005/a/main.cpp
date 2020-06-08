#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string S, T, s, t;
    cin >> S >> T;
    s = S, t = T;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    if (S == T)
        cout << "same" << endl;
    else if (s == t)
        cout << "case-insensitive" << endl;
    else
        cout << "different" << endl;
    return 0;
}
