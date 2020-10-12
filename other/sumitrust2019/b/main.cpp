#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

const int MAX = 50000;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i < MAX; i++) {
        if (floor(i * 1.08) == n) {
            cout << i << endl;
            return 0;
        }
    }

    cout << ":(" << endl;
    return 0;
}
