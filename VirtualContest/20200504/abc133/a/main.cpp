#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    if (a * n < b)
        cout << a * n << endl;
    else
        cout << b << endl;
    return 0;
}
