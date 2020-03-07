#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    float H, A;
    cin >> H >> A;

    int ans = ceil(H / A);

    cout << ans << endl;
    return 0;
}
