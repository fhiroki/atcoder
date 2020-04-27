#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int a = count(s.begin(), s.end(), '0');
    int ans = min(a, n - a) * 2;

    cout << ans << endl;
    return 0;
}
