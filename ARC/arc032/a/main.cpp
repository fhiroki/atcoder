#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "BOWWOW" << endl;
        return 0;
    }

    int ans = n * (n + 1) / 2;
    for (int i = 2; i * i < ans; i++) {
        if (ans % i == 0) {
            cout << "BOWWOW" << endl;
            return 0;
        }
    }

    cout << "WANWAN" << endl;
    return 0;
}
