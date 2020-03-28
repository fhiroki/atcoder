#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int n;

int dfs(string s) {
    if (stoll(s) > n) return 0;
    int ret = 0;
    if (count(s.cbegin(), s.cend(), '7') > 0 &&
        count(s.cbegin(), s.cend(), '5') > 0 &&
        count(s.cbegin(), s.cend(), '3') > 0) ret++;

    ret += dfs(s+'7');
    ret += dfs(s+'5');
    ret += dfs(s+'3');
    return ret;
}

int main() {
    cin >> n;

    int ans = dfs("0");

    cout << ans << endl;
    return 0;
}
