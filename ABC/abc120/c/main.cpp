#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 2*min(count(s.begin(), s.end(), '0'), count(s.begin(), s.end(), '1'));

    cout << ans << endl;
    return 0;
}
