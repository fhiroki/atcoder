#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    cout << min(x - 1, n - x) << endl;
    return 0;
}
