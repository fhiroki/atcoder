#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void calc(string& s) {
    map<char, char> to;
    char t = 'a';
    for (auto& c : s) {
        if (to.count(c))
            c = to[c];
        else
            c = to[c] = t++;
    }
}

int main() {
    string s, t;
    cin >> s >> t;
    calc(s);
    calc(t);

    if (s == t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
