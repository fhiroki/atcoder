#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    rep(i, n) {
        char s;
        cin >> s;
        if (s == 'Y') {
            cout << "Four" << endl;
            return 0;
        }
    }

    cout << "Three" << endl;
    return 0;
}
