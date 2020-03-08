#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = -1;
    for (int i = 1250; i > 0; i--) {
        int a = floor(i * 0.08);
        int b = floor(i * 0.1);
        if (a == A && b == B) ans = i;
    }

    cout << ans << endl;
    return 0;
}
