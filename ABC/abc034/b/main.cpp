#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << n - 1 << endl;
    else
        cout << n + 1 << endl;
    return 0;
}
