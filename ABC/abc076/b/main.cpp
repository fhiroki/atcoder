#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a = 1;
    rep(i, n) a = min(a * 2, a + k);

    cout << a << endl;
    return 0;
}
