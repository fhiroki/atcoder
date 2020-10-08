#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, h, w;
    cin >> n >> h >> w;

    cout << (n - h + 1) * (n - w + 1) << endl;
    return 0;
}
