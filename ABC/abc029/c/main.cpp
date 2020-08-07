#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int n;

void dfs(string s) {
    if (s.size() == n) {
        cout << s << endl;
        return;
    }

    for (char c = 'a'; c <= 'c'; c++) dfs(s + c);
}

int main() {
    cin >> n;

    dfs("");
    return 0;
}
