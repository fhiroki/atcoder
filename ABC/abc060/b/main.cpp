#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int s[100] = {0};
    s[0] = a;
    for (int i = 1; i < 100; i++) s[i] += s[i - 1] + a;

    rep(i, 100) {
        if (s[i] % b == c) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
