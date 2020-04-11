#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;

    int cnt = 0, bcnt = 0;
    rep(i, n) {
        if (s[i] == 'a' && cnt < a + b) {
            cout << "Yes" << endl;
            cnt++;
        } else if (s[i] == 'b') {
            if (cnt < a + b && bcnt < b) {
                cout << "Yes" << endl;
                cnt++;
            } else {
                cout << "No" << endl;
            }
            bcnt++;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
