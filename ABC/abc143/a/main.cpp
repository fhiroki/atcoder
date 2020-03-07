#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = A - B * 2;
    if (ans < 0) ans = 0;

    cout << ans << endl;
    return 0;
}
