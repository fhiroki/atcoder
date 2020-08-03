#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int r = count(s.begin(), s.end(), 'R');
    int ans = count(s.begin(), s.begin() + r, 'W');

    cout << ans << endl;
    return 0;
}
