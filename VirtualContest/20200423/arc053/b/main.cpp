#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int a[26] = {0};
    rep(i, s.size()) a[s[i] - 'a']++;
    sort(a, a + 26, greater<int>());

    int odd = 0, even = 0;
    rep(i, 26) {
        if (a[i] == 0) break;
        if (a[i] % 2 == 0)
            even += a[i];
        else
            odd++, even += a[i] - 1;
    }

    int ans = 0;
    if (odd == 0)
        ans = even;
    else
        ans = 2 * floor((s.size() - odd) / (2 * odd)) + 1;

    cout << ans << endl;
    return 0;
}
