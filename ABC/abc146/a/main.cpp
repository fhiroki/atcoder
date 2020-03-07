#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    string S;
    cin >> S;
    vector<string> week{"SAT", "FRI", "THU", "WED", "TUE", "MON", "SUN"};

    int ans = 0;
    rep(i, 7) {
        ans++;
        if (S == week[i]) {
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
