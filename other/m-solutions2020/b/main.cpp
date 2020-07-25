#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int cnt = 0;
    while (b <= a) b *= 2, cnt++;
    while (c <= b) c *= 2, cnt++;

    if (cnt <= k)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
