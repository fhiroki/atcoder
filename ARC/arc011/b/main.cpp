#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    map<char, int> dict = {
        {'b', 1}, {'c', 1}, {'d', 2}, {'w', 2}, {'t', 3}, {'j', 3}, {'f', 4},
        {'q', 4}, {'l', 5}, {'v', 5}, {'s', 6}, {'x', 6}, {'p', 7}, {'m', 7},
        {'h', 8}, {'k', 8}, {'n', 9}, {'g', 9}, {'z', 0}, {'r', 0},
    };

    vector<string> ans;
    rep(i, n) {
        string w;
        cin >> w;
        transform(w.begin(), w.end(), w.begin(), ::tolower);

        string s;
        for (char c : w) {
            if (dict.find(c) != dict.end()) s += to_string(dict[c]);
        }

        if (!s.empty()) ans.push_back(s);
    }

    rep(i, (int)ans.size()) {
        cout << ans[i];
        if (i != ans.size() - 1) cout << ' ';
    }
    cout << endl;

    return 0;
}
