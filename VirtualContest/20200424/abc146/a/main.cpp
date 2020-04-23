#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    string week[6] = {"MON", "TUE", "WED", "THU", "FRI", "SAT"};

    int ans = 0;
    rep(i, 6) {
        if (s == week[i]) {
            cout << 7 - (i + 1) << endl;
            return 0;
        }
    }
    cout << 7 << endl;

    return 0;
}
