#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> v;
    rep(i, s.size() - 1) {
        if (s.substr(i, 2) == "WW") v.push_back(i);
    }

    string ans;
    if (v[1] - v[0] == 7) {
        if (v[0] == 0)
            ans = "Mi";
        else if (v[0] == 2)
            ans = "Re";
        else if (v[0] == 4)
            ans = "Do";
    } else {
        if (v[0] == 0)
            ans = "Si";
        else if (v[0] == 2)
            ans = "La";
        else if (v[0] == 4)
            ans = "So";
        else if (v[0] == 6)
            ans = "Fa";
    }

    cout << ans << endl;
    return 0;
}
