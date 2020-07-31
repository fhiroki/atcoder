#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a[3];
    rep(i, 3) cin >> a[i];
    sort(a, a + 3);

    cout << a[1] << endl;
    return 0;
}
