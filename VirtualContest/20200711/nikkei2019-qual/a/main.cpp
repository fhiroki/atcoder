#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    cout << min(a, b) << ' ' << max(0, (a + b) - n) << endl;
    return 0;
}
