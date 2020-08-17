#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    if (s == "RRR")
        ans = 3;
    else if (s == "RRS" || s == "SRR")
        ans = 2;
    else if (s == "RSS" || s == "SRS" || s == "SSR" || s == "RSR")
        ans = 1;

    cout << ans << endl;
    return 0;
}
