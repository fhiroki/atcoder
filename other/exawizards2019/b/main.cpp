#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int r = 0, b = 0;
    rep(i, n) {
        char c;
        cin >> c;
        if (c == 'R')
            r++;
        else
            b++;
    }

    if (r > b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
