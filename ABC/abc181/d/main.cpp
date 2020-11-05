#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

bool solve(string s) {
    int n = s.size();
    if (n == 1) return s == "8";
    if (n == 2) {
        if (stoi(s) % 8 == 0) return true;
        swap(s[0], s[1]);
        return stoi(s) % 8 == 0;
    }

    vector<int> cnt(10);
    rep(i, (int)s.size()) cnt[s[i] - '0']++;

    for (int i = 112; i < 1000; i += 8) {
        auto c = cnt;
        for (char x : to_string(i)) c[x - '0']--;
        if (all_of(c.begin(), c.end(), [](int x) { return x >= 0; }))
            return true;
    }

    return false;
}

int main() {
    string s;
    cin >> s;

    if (solve(s))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
