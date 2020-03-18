#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int l = stoi(s.substr(0, 2));
    int r = stoi(s.substr(2, 2));

    string ans = "NA";
    if (l >= 1 && l <= 12) {
        ans = "MMYY";
        if (r >= 1 && r <= 12) ans = "AMBIGUOUS";
    } else if (r >= 1 && r <= 12) {
        ans = "YYMM";
        if (l >= 1 && l <= 12) ans = "AMBIGUOUS";
    }

    cout << ans << endl;
    return 0;
}
