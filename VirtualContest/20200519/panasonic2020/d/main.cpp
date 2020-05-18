#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int n;

void dfs(string s, char mx) {
    if (s.size() == n) {
        cout << s << endl;
    } else {
        for (char c = 'a'; c <= mx; c++) {
            dfs(s + c, ((c == mx) ? (char)(mx + 1) : mx));
        }
    }
}

int main() {
    cin >> n;

    dfs("", 'a');

    return 0;
}
