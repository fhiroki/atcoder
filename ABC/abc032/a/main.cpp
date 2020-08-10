#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    for (int i = n; i < 1e9; i++) {
        if (i % a == 0 && i % b == 0) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
