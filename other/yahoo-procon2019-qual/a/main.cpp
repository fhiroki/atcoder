#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (ceil(n / 2.0) >= k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
