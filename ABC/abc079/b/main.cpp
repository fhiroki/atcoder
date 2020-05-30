#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    ll L[n + 1];
    L[0] = 2;
    L[1] = 1;
    for (int i = 2; i <= n; i++) {
        L[i] = L[i - 1] + L[i - 2];
    }

    cout << L[n] << endl;
    return 0;
}
