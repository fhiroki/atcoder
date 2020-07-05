#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 1000 == 0)
        cout << 0 << endl;
    else
        cout << 1000 - n % 1000 << endl;
    return 0;
}
