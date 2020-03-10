#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int k, x;
    cin >> k >> x;

    for (int i = -k+1; i < k; i++) {
        cout << x + i << ' ';
    }
    cout << endl;

    return 0;
}
