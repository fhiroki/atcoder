#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = -1;
    if (A < 10 && B < 10) ans = A * B;

    cout << ans << endl;
    return 0;
}
