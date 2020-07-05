#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int ac = 0, wa = 0, tle = 0, re = 0;
    rep(i, n) {
        string s;
        cin >> s;
        if (s == "AC")
            ac++;
        else if (s == "WA")
            wa++;
        else if (s == "TLE")
            tle++;
        else if (s == "RE")
            re++;
    }

    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
    return 0;
}
